@class NSString, NSDictionary;

@interface AWECommercialPrivateComponent : AWEUserHomeBaseComponent

@property (retain, nonatomic) NSString *activityId;
@property (retain, nonatomic) NSString *merchantUid;
@property (retain, nonatomic) NSString *extraInfo;
@property (retain, nonatomic) NSString *materialId;
@property (retain, nonatomic) NSString *playType;
@property (copy, nonatomic) NSDictionary *paramDict;

- (BOOL)isCraftsmanScene;
- (BOOL)onConfigWithRouterParamDict:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
