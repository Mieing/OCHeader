@class AWEEntertainmentMultipleEventsView, AWEPlayInteractionContext, NSString, AWECommonButtonInfoModel, AWEPlayInteractionLongVideoSelectEpisodeLeftView, AWEPlayInteractionLongVideoPlusSelectLeftElementViewModel;
@protocol AWEPlayInteractionBottomButtonComponentProtocol, AWEPlayInteractionBottomButtonLongVideoComponentViewModelProtocol;

@interface AWEPlayInteractionBottomButtonLongVideoComponentViewModel : NSObject <AWELongVideoPlusSelectPanelDelegate, AWEPlayInteractionBottomButtonLongVideoComponentViewModelProtocol>

@property (retain, nonatomic) AWECommonButtonInfoModel *infoModel;
@property (weak, nonatomic) AWEPlayInteractionContext *context;
@property (weak, nonatomic) id<AWEPlayInteractionBottomButtonComponentProtocol> component;
@property (retain, nonatomic) AWEPlayInteractionLongVideoSelectEpisodeLeftView *selectEpisodeLeftView;
@property (retain, nonatomic) AWEPlayInteractionLongVideoPlusSelectLeftElementViewModel *selectViewModel;
@property (retain, nonatomic) AWEEntertainmentMultipleEventsView *multipleEventsView;
@property (retain, nonatomic) id<AWEPlayInteractionBottomButtonLongVideoComponentViewModelProtocol> targetComponentViewModel;
@property (nonatomic) unsigned long long state;
@property (nonatomic) unsigned long long unlockButtonState;
@property (copy, nonatomic) NSString *unlockText;
@property (nonatomic, getter=isSupportedSelectEpisode) BOOL supportSelectEpisode;
@property (copy, nonatomic) id /* block */ selectEpisodeClickBlock;
@property (copy, nonatomic) id /* block */ unlockClickBlock;
@property (copy, nonatomic) id /* block */ cancelAutoEnterClickBlock;
@property (copy, nonatomic) id /* block */ BVIPOrderClickBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowButtonForModel:(id)a0 context:(id)a1;

- (long long)activateType;
- (id)initWithInfoModel:(id)a0 context:(id)a1 component:(id)a2;
- (void)didClickView:(id)a0 atPosition:(long long)a1 withModel:(id)a2;
- (double)getCurrentPlayProgress;
- (id)currentPlayingAwemeModel;
- (void)selectPanelDidShow;
- (void)selectPanelDidDismiss;
- (void)selectPanelDragOffset:(double)a0;
- (void)changeVideoWithModel:(id)a0;
- (BOOL)needsShowIAA;
- (BOOL)needsShowBottomButton;
- (BOOL)needsShowBVIP;
- (Class)targetViewModelClass;
- (BOOL)needsShowLongVideoSelectEpisode;
- (void).cxx_destruct;
- (void)setup;
- (void)show;
- (void)addObservers;

@end
