SET @OGUID := 101313;
DELETE FROM `gameobject` WHERE `guid` BETWEEN @OGUID-119 AND @OGUID-0;
DELETE FROM `gameobject` WHERE `phaseId`=1740;
INSERT INTO `gameobject` (`guid`, `id`, `map`, `phaseId`, `position_x`, `position_y`, `position_z`, `orientation`) VALUES
(@OGUID-0, 209328, 870, 1740, -536.667, -1515.83, 6.90606, 2.04653),
(@OGUID-1, 209328, 870, 1740, -746.105, -1592.65, 26.103, 2.04653),
(@OGUID-2, 209328, 870, 1740, -704.217, -1508.85, 3.34308, 2.04653),
(@OGUID-3, 209328, 870, 1740, -657.676, -1501.87, 3.49413, 2.04653),
(@OGUID-4, 209328, 870, 1740, -843.842, -1592.65, 1.82281, 2.04653),
(@OGUID-5, 209328, 870, 1740, -801.955, -1613.6, 2.86431, 2.04653),
(@OGUID-6, 209328, 870, 1740, -680.946, -1767.23, 2.46407, 2.04653),
(@OGUID-7, 209328, 870, 1740, -741.451, -1683.43, 17.2872, 2.04653),
(@OGUID-8, 209328, 870, 1740, -746.105, -1683.43, 17.1854, 2.04653),
(@OGUID-9, 209328, 870, 1740, -601.826, -1557.73, 11.7642, 2.04653),
(@OGUID-10, 209328, 870, 1740, -518.051, -1746.28, -17.6051, 2.04653),
(@OGUID-11, 209328, 870, 1740, -713.526, -1830.08, 4.71763, 2.04653),
(@OGUID-12, 209328, 870, 1740, -722.834, -1578.68, 34.0204, 2.04653),
(@OGUID-13, 209328, 870, 1740, -625.096, -1571.7, 18.1951, 2.04653),
(@OGUID-14, 209328, 870, 1740, -662.33, -1627.57, 24.6109, 2.04653),
(@OGUID-15, 209328, 870, 1740, -746.105, -1851.03, 4.78908, 2.04653),
(@OGUID-16, 209328, 870, 1740, -653.021, -1397.12, 1.24897, 2.04653),
(@OGUID-17, 209328, 870, 1740, -760.067, -1906.9, 5.10909, 2.04653),
(@OGUID-18, 209328, 870, 1740, -680.946, -1369.18, 5.88025, 2.04653),
(@OGUID-19, 209328, 870, 1740, -755.413, -1725.33, 27.4403, 2.04653),
(@OGUID-20, 209328, 870, 1740, -694.909, -1718.35, 17.4731, 2.04653),
(@OGUID-21, 209328, 870, 1740, -797.301, -1704.38, 10.2189, 2.04653),
(@OGUID-22, 209328, 870, 1740, -708.871, -1871.98, 6.85791, 2.04653),
(@OGUID-23, 209328, 870, 1740, -741.451, -1634.55, 16.2216, 2.04653),
(@OGUID-24, 209328, 870, 1740, -722.834, -1725.33, 27.3802, 2.04653),
(@OGUID-25, 209328, 870, 1740, -685.601, -1767.23, 2.81279, 2.04653),
(@OGUID-26, 209311, 870, 1740, -722.834, -1725.33, 27.3802, 2.04653),
(@OGUID-27, 209328, 870, 1740, -806.609, -1613.6, 2.15379, 2.04653),
(@OGUID-28, 209311, 870, 1740, -680.946, -1767.23, 2.46407, 2.04653),
(@OGUID-29, 209328, 870, 1740, -685.601, -1376.17, 4.71566, 2.04653),
(@OGUID-30, 209328, 870, 1740, -671.638, -1578.68, 10.178, 2.04653),
(@OGUID-31, 209311, 870, 1740, -801.955, -1613.6, 2.86431, 2.04653),
(@OGUID-32, 209328, 870, 1740, -727.488, -1725.33, 27.487, 2.04653),
(@OGUID-33, 209311, 870, 1740, -653.021, -1397.12, 1.24897, 2.04653),
(@OGUID-34, 209354, 870, 1740, -532.013, -1620.58, 10.9777, 2.04653),
(@OGUID-35, 209354, 870, 1740, -741.451, -1613.6, 22.5242, 2.04653),
(@OGUID-36, 209354, 870, 1740, -634.405, -1229.52, 1.36574, 2.04653),
(@OGUID-37, 209354, 870, 1740, -746.105, -1613.6, 23.3926, 2.04653),
(@OGUID-38, 209354, 870, 1740, -653.021, -1648.52, 16.943, 2.04653),
(@OGUID-39, 209354, 870, 1740, -573.901, -1753.27, 0.331631, 2.04653),
(@OGUID-40, 209354, 870, 1740, -527.359, -1683.43, 6.6755, 2.04653),
(@OGUID-41, 209354, 870, 1740, -727.488, -1746.28, 28.7766, 2.04653),
(@OGUID-42, 209354, 870, 1740, -620.442, -1739.3, 10.2278, 2.04653),
(@OGUID-43, 209354, 870, 1740, -518.051, -1725.33, 2.10044, 2.04653),
(@OGUID-44, 209354, 870, 1740, -597.171, -1627.57, 13.842, 2.04653),
(@OGUID-45, 209354, 870, 1740, -592.517, -1697.4, 9.87165, 2.04653),
(@OGUID-46, 209349, 870, 1740, -592.517, -1697.4, 9.87165, 2.04653),
(@OGUID-47, 209353, 870, 1740, -606.48, -1788.18, -0.017914, 2.04653),
(@OGUID-48, 209349, 870, 1740, -620.442, -1739.3, 10.2278, 2.04653),
(@OGUID-49, 209349, 870, 1740, -727.488, -1746.28, 28.7766, 2.04653),
(@OGUID-50, 209353, 870, 1740, -573.901, -1753.27, 0.331631, 2.04653),
(@OGUID-51, 209353, 870, 1740, -876.422, -1459.97, 0.361797, 2.04653),
(@OGUID-52, 209349, 870, 1740, -741.451, -1613.6, 22.5242, 2.04653),
(@OGUID-53, 209353, 870, 1740, -522.705, -1718.35, 2.15691, 2.04653),
(@OGUID-54, 209353, 870, 1740, -848.496, -1439.02, 0.327805, 2.04653),
(@OGUID-55, 209349, 870, 1740, -555.284, -1599.63, 12.8203, 2.04653),
(@OGUID-56, 209349, 870, 1740, -746.105, -1613.6, 23.3926, 2.04653),
(@OGUID-57, 209353, 870, 1740, -522.705, -1725.33, 2.83003, 2.04653),
(@OGUID-58, 209353, 870, 1740, -778.684, -1404.1, 1.07718, 2.04653),
(@OGUID-59, 209349, 870, 1740, -648.367, -1648.52, 15.8, 2.04653),
(@OGUID-60, 209349, 870, 1740, -648.367, -1655.5, 15.865, 2.04653),
(@OGUID-61, 209349, 870, 1740, -597.171, -1627.57, 13.842, 2.04653),
(@OGUID-62, 209349, 870, 1740, -564.592, -1564.72, 12.0085, 2.04653),
(@OGUID-63, 209353, 870, 1740, -606.48, -1795.17, 1.99826, 2.04653),
(@OGUID-64, 209353, 870, 1740, -741.451, -1278.4, 1.09296, 2.04653),
(@OGUID-65, 209349, 870, 1740, -527.359, -1683.43, 6.6755, 2.04653),
(@OGUID-66, 209353, 870, 1740, -746.105, -1278.4, 0.668877, 2.04653),
(@OGUID-67, 209349, 870, 1740, -508.742, -1585.67, -5.15367, 2.04653),
(@OGUID-68, 209353, 870, 1740, -694.909, -1222.53, 0.188126, 2.04653),
(@OGUID-69, 209349, 870, 1740, -657.676, -1697.4, 18.0272, 2.04653),
(@OGUID-70, 209353, 870, 1740, -955.542, -1313.32, 0.5177, 2.04653),
(@OGUID-71, 209353, 870, 1740, -899.692, -1348.23, 1.42731, 2.04653),
(@OGUID-72, 209353, 870, 1740, -694.909, -1376.17, 3.01361, 2.04653),
(@OGUID-73, 209349, 870, 1740, -653.021, -1648.52, 16.943, 2.04653),
(@OGUID-74, 209353, 870, 1740, -722.834, -1390.13, 4.47963, 2.04653),
(@OGUID-75, 209353, 870, 1740, -634.405, -1229.52, 1.36574, 2.04653),
(@OGUID-76, 209311, 870, 1740, -657.676, -1501.87, 3.49413, 2.04653),
(@OGUID-77, 209311, 870, 1740, -741.451, -1634.55, 16.2216, 2.04653),
(@OGUID-78, 209311, 870, 1740, -760.067, -1906.9, 5.10909, 2.04653),
(@OGUID-79, 209311, 870, 1740, -746.105, -1683.43, 17.1854, 2.04653),
(@OGUID-80, 209311, 870, 1740, -680.946, -1369.18, 5.88025, 2.04653),
(@OGUID-81, 209311, 870, 1740, -662.33, -1627.57, 24.6109, 2.04653),
(@OGUID-82, 209311, 870, 1740, -713.526, -1830.08, 4.71763, 2.04653),
(@OGUID-83, 209311, 870, 1740, -741.451, -1683.43, 17.2872, 2.04653),
(@OGUID-84, 209311, 870, 1740, -746.105, -1592.65, 26.103, 2.04653),
(@OGUID-85, 209311, 870, 1740, -722.834, -1578.68, 34.0204, 2.04653),
(@OGUID-86, 209311, 870, 1740, -755.413, -1725.33, 27.4403, 2.04653),
(@OGUID-87, 209311, 870, 1740, -797.301, -1704.38, 10.2189, 2.04653),
(@OGUID-88, 209311, 870, 1740, -843.842, -1592.65, 1.82281, 2.04653),
(@OGUID-89, 209311, 870, 1740, -708.871, -1871.98, 6.85791, 2.04653),
(@OGUID-90, 209311, 870, 1740, -746.105, -1851.03, 4.78908, 2.04653),
(@OGUID-91, 209311, 870, 1740, -685.601, -1767.23, 2.81279, 2.04653),
(@OGUID-92, 209311, 870, 1740, -625.096, -1571.7, 18.1951, 2.04653),
(@OGUID-93, 209311, 870, 1740, -601.826, -1557.73, 11.7642, 2.04653),
(@OGUID-94, 209311, 870, 1740, -727.488, -1725.33, 27.487, 2.04653),
(@OGUID-95, 209311, 870, 1740, -694.909, -1718.35, 17.4731, 2.04653),
(@OGUID-96, 209311, 870, 1740, -704.217, -1508.85, 3.34308, 2.04653),
(@OGUID-97, 209311, 870, 1740, -806.609, -1613.6, 2.15379, 2.04653),
(@OGUID-98, 209311, 870, 1740, -685.601, -1376.17, 4.71566, 2.04653),
(@OGUID-99, 209311, 870, 1740, -518.051, -1746.28, -17.6051, 2.04653),
(@OGUID-100, 209311, 870, 1740, -671.638, -1578.68, 10.178, 2.04653),
(@OGUID-101, 209311, 870, 1740, -536.667, -1515.83, 6.90606, 2.04653),
(@OGUID-102, 215413, 870, 1740, -659.58, -1624.87, 24.7405, 0),
(@OGUID-103, 215413, 870, 1740, -763.505, -1907.63, 4.13763, 0),
(@OGUID-104, 215413, 870, 1740, -712.564, -1599.82, 21.2561, 0),
(@OGUID-105, 215413, 870, 1740, -600.339, -1556.95, 11.0291, 0),
(@OGUID-106, 215413, 870, 1740, -693.104, -1720.87, 17.9123, 0),
(@OGUID-107, 215413, 870, 1740, -711.543, -1873.02, 7.03714, 0),
(@OGUID-108, 215413, 870, 1740, -774.406, -1651.54, 7.847, 4.10444),
(@OGUID-109, 215413, 870, 1740, -690.137, -1639.48, 22.6329, 0),
(@OGUID-110, 215413, 870, 1740, -626.901, -1568.95, 19.3761, 0),
(@OGUID-111, 215413, 870, 1740, -539.023, -1515.88, 7.22319, 0),
(@OGUID-112, 215413, 870, 1740, -719.719, -1580.22, 34.7358, 2.19961),
(@OGUID-113, 215413, 870, 1740, -745.795, -1683.22, 16.7408, 0),
(@OGUID-114, 215413, 870, 1740, -683.483, -1770.67, 3.44034, 0),
(@OGUID-115, 215413, 870, 1740, -654.88, -1398.11, 1.581, 0),
(@OGUID-116, 215413, 870, 1740, -799.497, -1705.29, 8.33333, 2.09624),
(@OGUID-117, 215413, 870, 1740, -670.429, -1583.05, 11.1423, 1.30049),
(@OGUID-118, 215413, 870, 1740, -714.641, -1829.57, 4.09966, 0),
(@OGUID-119, 215413, 870, 1740, -755.984, -1729.34, 27.5763, 0);
