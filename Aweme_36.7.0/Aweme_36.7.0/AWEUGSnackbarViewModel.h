@class NSString, NSDictionary;

@interface AWEUGSnackbarViewModel : NSObject <AWEUGSceneUndertakeSnackbarViewDelegate>

@property (copy, nonatomic) NSString *sceneType;
@property (copy, nonatomic) NSDictionary *sceneTypeTabIDMap;
@property (copy, nonatomic) NSString *snackbarButtonStyle;
@property (copy, nonatomic) NSString *descriptionText;
@property (copy, nonatomic) NSString *buttonText;
@property (nonatomic) double buttonWidth;
@property (nonatomic) long long autoDismissTime;
@property (copy, nonatomic) NSString *actionScheme;
@property (copy, nonatomic) NSString *iconURL;
@property (copy, nonatomic) NSString *detailContent;
@property (nonatomic) long long viewStatus;
@property (copy, nonatomic) NSDictionary *extraData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)actionButtonClicked:(id)a0;
- (void)viewDidShow;
- (void)dismissButtonClicked;
- (void)handleDataModel:(id)a0;
- (void)calculateWidth;
- (void)trackWithEvent:(id)a0 action:(id)a1;
- (id)initWithSceneType:(id)a0 model:(id)a1 extra:(id)a2;
- (void).cxx_destruct;
- (void)viewDidDisappear;

@end
