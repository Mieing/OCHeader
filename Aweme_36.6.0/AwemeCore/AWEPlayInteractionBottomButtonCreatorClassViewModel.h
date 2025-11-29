@class AWEPageContext, NSString, AWECommonButtonInfoModel;
@protocol AWEPlayInteractionContextProtocol, AWEPlayInteractionBottomButtonComponentProtocol;

@interface AWEPlayInteractionBottomButtonCreatorClassViewModel : NSObject <AWEPlayInteractionBottomButtonComponentViewModelProtocol>

@property (retain, nonatomic) AWECommonButtonInfoModel *infoModel;
@property (weak, nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> *context;
@property (weak, nonatomic) id<AWEPlayInteractionBottomButtonComponentProtocol> component;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subTitle;

+ (BOOL)shouldShowButtonForModel:(id)a0 context:(id)a1;

- (long long)activateType;
- (id)initWithInfoModel:(id)a0 context:(id)a1 component:(id)a2;
- (void)didClickView:(id)a0 atPosition:(long long)a1 withModel:(id)a2;
- (void)onButtonClicked;
- (void)dismissPanel;
- (void)trackEnterManualCliked;
- (void).cxx_destruct;

@end
