@class NSArray, NSDictionary;

@interface AWEPortraitsEventHelper : NSObject

@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL enableIESGetter;
@property (retain, nonatomic) NSArray *hookEventArray;
@property (retain, nonatomic) NSDictionary *hookEventDic;
@property (retain, nonatomic) NSDictionary *adHookEventDic;

+ (id)sharedInstance;

- (BOOL)enableAddEvent;
- (void)onEventV3:(id)a0 params:(id)a1;
- (id)getAdExtPortraitsWithEvent:(id)a0 groupID:(id)a1 logExtra:(id)a2;
- (void)setupV1ConfigWithHookEventDict:(id)a0;
- (void)setupV2ConfigWithHookEventDict:(id)a0 adHookEventDict:(id)a1;
- (void)addUserPortraits:(id)a0 videoPortraits:(id)a1 forEvent:(id)a2 withHookEventDict:(id)a3;
- (id)findItemIDInParams:(id)a0;
- (id)getExtPortraitsWithHookConfig:(id)a0 groupID:(id)a1;
- (id)getUserPortrait:(id)a0;
- (id)getVideoPortrait:(id)a0 groupID:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)setup;

@end
