@class NSString, FinderJumpInfo, NSMutableArray;

@interface NewLifeGeneralJumpReq : WXPBGeneratedMessage

@property (retain, nonatomic) FinderJumpInfo *jumpInfo;
@property (retain, nonatomic) NSMutableArray *clientKeys;
@property (retain, nonatomic) NSString *extraInfo;
@property (nonatomic) int posiotn;

+ (void)initialize;

@end
