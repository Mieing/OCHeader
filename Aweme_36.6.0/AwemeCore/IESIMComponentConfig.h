@class NSArray;

@interface IESIMComponentConfig : NSObject

@property (copy, nonatomic) NSArray *demoteCompArray;
@property (copy, nonatomic) id /* block */ logBlock;
@property (copy, nonatomic) id /* block */ viewSetupBlock;
@property (nonatomic) BOOL enableTrackPerf;
@property (nonatomic) BOOL enableAsyncLayout;
@property (nonatomic) BOOL enableViewDidAppearAndRender;
@property (nonatomic) BOOL enableContainerComponentSupportInjected;
@property (nonatomic) BOOL enablePaddingOpt;
@property (nonatomic) BOOL enableFlexPresenterLock;
@property (nonatomic) BOOL enableAccessibilityOpt;
@property (nonatomic) BOOL enableButtonPresenterStatefulBackgroundImage;
@property (nonatomic) BOOL fixComponentManagerMultiThreadIssue;

+ (id)sharedInstance;

- (void).cxx_destruct;

@end
