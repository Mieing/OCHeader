@interface MMKvStatStringSerializer : MMObject

+ (id)statStringForStatItem:(id)a0 withContainerSeperator:(id)a1;
+ (id)statStringForArray:(id)a0 WithSeperator:(id)a1;
+ (id)statStringForSet:(id)a0 WithSeperator:(id)a1;
+ (BOOL)isContainerItemTypeStatable:(id)a0;

@end
