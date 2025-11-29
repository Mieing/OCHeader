@class NSMutableArray;

@interface FinderEnhanceTypeList : WXPBGeneratedMessage <WCTColumnCoding>

@property (retain, nonatomic) NSMutableArray *listenEventList;
@property (retain, nonatomic) NSMutableArray *detail;

+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnType;
+ (id)typeListWithConfig:(id)a0 isFeedContainVideo:(BOOL)a1;
+ (void)initialize;

- (void)setDetail:(id)a0;
- (id)detail;
- (void)setListenEventList:(id)a0;
- (id)listenEventList;
- (id)archivedWCTValue;
- (id)description;

@end
