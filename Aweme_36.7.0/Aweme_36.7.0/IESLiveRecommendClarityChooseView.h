@class IESLiveClarityChooseView, NSString, IESLiveUploadBandwidthProberHeaderView;
@protocol IESLiveRecommendClarityChooseViewDelegate;

@interface IESLiveRecommendClarityChooseView : UIView <IESLiveClarityChooseViewDelegate>

@property (retain, nonatomic) IESLiveUploadBandwidthProberHeaderView *headerView;
@property (retain, nonatomic) IESLiveClarityChooseView *chooseView;
@property (weak, nonatomic) id<IESLiveRecommendClarityChooseViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hideClarityChooseSheet;
- (void)clarityChooseView:(id)a0 didSelectItems:(id)a1;
- (void)updateItems:(id)a0 selectedIndex:(unsigned long long)a1;
- (void)updateHeadTip:(id)a0 needLoading:(BOOL)a1;
- (id)initWithItems:(id)a0 selectedIndex:(unsigned long long)a1 tip:(id)a2 needLoading:(BOOL)a3;
- (void)configSubviewsWithItem:(id)a0 selectedIndex:(unsigned long long)a1 tip:(id)a2 needLoading:(BOOL)a3;
- (void).cxx_destruct;

@end
