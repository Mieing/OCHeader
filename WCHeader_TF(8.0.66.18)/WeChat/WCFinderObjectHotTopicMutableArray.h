@interface WCFinderObjectHotTopicMutableArray : NSMutableArray <WCTColumnCoding>

+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnType;
+ (id)convertFromPBTopicList:(id)a0;

- (id)archivedWCTValue;

@end
