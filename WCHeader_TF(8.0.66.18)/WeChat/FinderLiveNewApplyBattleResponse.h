@class NSString, BaseResponse;

@interface FinderLiveNewApplyBattleResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int confirmTtl;
@property (retain, nonatomic) NSString *battleId;

+ (void)initialize;

@end
