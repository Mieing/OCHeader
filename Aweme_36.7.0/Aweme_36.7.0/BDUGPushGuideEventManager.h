@interface BDUGPushGuideEventManager : NSObject

@property (nonatomic) BOOL backToApp;
@property (nonatomic) BOOL hasReportJumpResult;

+ (id)shareInstanced;

- (void)trackPushAuthorizationWithEvent:(unsigned long long)a0 scene:(id)a1 isSystem:(BOOL)a2;
- (void)trackPushGuideJumpToSystemConfigWithScene:(id)a0;

@end
