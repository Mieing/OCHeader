@class FinderJumpInfo;

@interface ChatroomBindInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int status;
@property (retain, nonatomic) FinderJumpInfo *jumpInfo;

+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnTypeForWCDB;
+ (void)initialize;

- (void)setJumpInfo:(id)a0;
- (id)jumpInfo;
- (void)setStatus:(unsigned int)a0;
- (unsigned int)status;
- (id)archivedWCTValue;

@end
