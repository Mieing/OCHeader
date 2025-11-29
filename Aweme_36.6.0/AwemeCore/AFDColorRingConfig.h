@class NSString, AWEUserModel;

@interface AFDColorRingConfig : NSObject <AFDColorRingConfigProtocol>

@property (copy, nonatomic) NSString *uid;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (copy, nonatomic) NSString *scene;
@property (nonatomic) long long type;
@property (readonly, copy, nonatomic) id /* block */ configShouldSyncUser;
@property (readonly, copy, nonatomic) id /* block */ configShouldAutomaticallyGenerateView;
@property (readonly, copy, nonatomic) id /* block */ configShouldFacadeReportShow;
@property (readonly, copy, nonatomic) id /* block */ configShouldShowLoadingOnClick;
@property (readonly, copy, nonatomic) id /* block */ configEnablePressAndBounceEffect;
@property (readonly, copy, nonatomic) id /* block */ configEnablePublishSpringEffect;
@property (nonatomic) BOOL shouldSyncUser;
@property (nonatomic) BOOL shouldAutomaticallyGenerateView;
@property (nonatomic) BOOL shouldFacadeReportShow;
@property (nonatomic) BOOL shouldShowLoadingOnClick;
@property (nonatomic) BOOL enablePressAndBounceEffect;
@property (nonatomic) BOOL enablePublishSpringEffect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)configWithUserModel:(id)a0 scene:(id)a1 type:(long long)a2;
+ (id)configWithUID:(id)a0 scene:(id)a1 type:(long long)a2;

@end
