@class NSString, MMListenJumpInfo;

@interface MMListenDiscoverResponse_JumpableTopToastV2 : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *wording;
@property (retain, nonatomic) MMListenJumpInfo *jumpInfo;
@property (retain, nonatomic) NSString *activityId;
@property (retain, nonatomic) NSString *subWording;
@property (nonatomic) int exposeLimit;

+ (void)initialize;

@end
