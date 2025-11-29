@interface AppJumpLogicHelper : NSObject

@property (nonatomic) long long jumpSource;

- (BOOL)isShowTimeLineJumpLink:(id)a0;
- (BOOL)isCanJumpWithAppId:(id)a0;
- (BOOL)jumpByAppIdInMessage:(id)a0 chatRoom:(BOOL)a1;
- (BOOL)jumpByAppIdInTimeline:(id)a0;
- (BOOL)jumpToGameDetailView:(id)a0 chatType:(int)a1;
- (BOOL)innerJumpByAppId:(id)a0 chatType:(int)a1;
- (BOOL)isShowTimelineSource:(id)a0;
- (BOOL)isShowAppMessageBottom:(id)a0;
- (BOOL)isCanShowSource:(id)a0;
- (id)getAppIdByFunctionType:(long long)a0;
- (long long)getJumpFunctionTypeByAppId:(id)a0;

@end
