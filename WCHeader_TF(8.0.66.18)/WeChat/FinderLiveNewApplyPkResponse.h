@class NSString, BaseResponse;

@interface FinderLiveNewApplyPkResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *applyId;
@property (nonatomic) unsigned long long confirmExpiredTime;

+ (void)initialize;

@end
