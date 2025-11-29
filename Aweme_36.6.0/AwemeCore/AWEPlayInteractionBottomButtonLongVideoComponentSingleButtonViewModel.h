@class AWEEntertainmentMultipleEventsView, AWEPlayInteractionContext, NSString, AWECommonButtonInfoModel, AWEPlayInteractionLongVideoSelectEpisodeLeftView;
@protocol AWEPlayInteractionBottomButtonComponentProtocol;

@interface AWEPlayInteractionBottomButtonLongVideoComponentSingleButtonViewModel : NSObject <AWEPlayInteractionBottomButtonLongVideoComponentViewModelProtocol>

@property (retain, nonatomic) AWECommonButtonInfoModel *infoModel;
@property (weak, nonatomic) AWEPlayInteractionContext *context;
@property (weak, nonatomic) id<AWEPlayInteractionBottomButtonComponentProtocol> component;
@property (retain, nonatomic) AWEPlayInteractionLongVideoSelectEpisodeLeftView *selectEpisodeLeftView;
@property (retain, nonatomic) AWEEntertainmentMultipleEventsView *multipleEventsView;
@property (nonatomic) BOOL inAutoEnter;
@property (nonatomic) unsigned long long state;
@property (nonatomic) unsigned long long unlockButtonState;
@property (copy, nonatomic) NSString *unlockText;
@property (nonatomic, getter=isSupportedSelectEpisode) BOOL supportSelectEpisode;
@property (copy, nonatomic) id /* block */ selectEpisodeClickBlock;
@property (copy, nonatomic) id /* block */ unlockClickBlock;
@property (copy, nonatomic) id /* block */ cancelAutoEnterClickBlock;
@property (copy, nonatomic) id /* block */ BVIPOrderClickBlock;

+ (BOOL)shouldShowButtonForModel:(id)a0 context:(id)a1;

- (long long)activateType;
- (id)initWithInfoModel:(id)a0 context:(id)a1 component:(id)a2;
- (void)didClickView:(id)a0 atPosition:(long long)a1 withModel:(id)a2;
- (void)setupWithSelectEpisodeButton;
- (void)setupWithoutSelectEpisodeButton;
- (void).cxx_destruct;
- (void)show;
- (void)updateUI;

@end
