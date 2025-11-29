@class NSString, NSMutableArray;

@interface FinderMentionAggregated : WXPBGeneratedMessage <WCTColumnCoding>

@property (retain, nonatomic) NSString *nicknameList;
@property (nonatomic) unsigned long long nicknameCount;
@property (retain, nonatomic) NSMutableArray *headUrlList;

+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnType;
+ (void)initialize;

- (void)setHeadUrlList:(id)a0;
- (id)headUrlList;
- (void)setNicknameCount:(unsigned long long)a0;
- (unsigned long long)nicknameCount;
- (void)setNicknameList:(id)a0;
- (id)nicknameList;
- (id)archivedWCTValue;

@end
