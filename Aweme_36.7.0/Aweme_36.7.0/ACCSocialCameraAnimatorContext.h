@class NSArray, NSString, UIView;
@protocol IESServiceProvider;

@interface ACCSocialCameraAnimatorContext : NSObject <ACCSwitchModeViewDataSource>

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (retain, nonatomic) UIView *cameraPlaceholder;
@property (retain, nonatomic) UIView *cameraViewSnapshot;
@property (retain, nonatomic) UIView *interactionSnapshot;
@property (retain, nonatomic) UIView *modeContainerSnapshot;
@property (nonatomic) long long currentTabIndex;
@property (nonatomic) long long targetTabIndex;
@property (nonatomic) long long fromRatio;
@property (nonatomic) long long targetRatio;
@property (copy, nonatomic) NSArray *tabConfigArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
