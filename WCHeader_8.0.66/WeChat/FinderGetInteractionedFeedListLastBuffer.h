@interface FinderGetInteractionedFeedListLastBuffer : WXPBGeneratedMessage

@property (nonatomic) unsigned long long lastLikeId;
@property (nonatomic) BOOL likeContinueFlag;
@property (nonatomic) unsigned long long lastFingerlikeId;
@property (nonatomic) BOOL fingerlikeContinueFlag;
@property (nonatomic) unsigned long long lastGlobalfavId;
@property (nonatomic) BOOL globalfavContinueFlag;

+ (void)initialize;

@end
