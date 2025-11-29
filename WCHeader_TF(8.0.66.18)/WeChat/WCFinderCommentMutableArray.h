@interface WCFinderCommentMutableArray : NSMutableArray <WCTColumnCoding>

+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnType;

- (id)archivedWCTValue;

@end
