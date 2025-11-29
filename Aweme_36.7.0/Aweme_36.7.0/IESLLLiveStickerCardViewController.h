@class IESLLLiveStickerCardViewModel, NSString, UIImageView, UIView, UITableView;
@protocol IESLLLiveStickerCardVCDelegate;

@interface IESLLLiveStickerCardViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, IESLLLiveStickerCardVC>

@property (retain, nonatomic) IESLLLiveStickerCardViewModel *viewModel;
@property (nonatomic) BOOL foldComponent;
@property (nonatomic) BOOL needResetFold;
@property (copy, nonatomic) NSString *cardId;
@property (retain, nonatomic) UIView *actionContainer;
@property (retain, nonatomic) UIImageView *smallImgView;
@property (retain, nonatomic) UIImageView *titleImgView;
@property (retain, nonatomic) UIImageView *indicatorImgView;
@property (retain, nonatomic) UITableView *detailTableView;
@property (retain, nonatomic) UIView *detailAccessView;
@property (weak, nonatomic) id<IESLLLiveStickerCardVCDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configData;
- (void)updateCardViewWithModel:(id)a0 originCardData:(id)a1;
- (void)addStickerCardViewOnContainer:(id)a0 parentVC:(id)a1;
- (void)trackerStickerUpdate;
- (void)resetStickerCardId;
- (void)removeStickerCardViewFromContainer;
- (void)configAccessibilityData;
- (void)updateCurrentStickerSize;
- (void)componentOnClick;
- (id)initWithCardModel:(id)a0 originCardData:(id)a1;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)setupUI;
- (struct CGSize { double x0; double x1; })componentSize;

@end
