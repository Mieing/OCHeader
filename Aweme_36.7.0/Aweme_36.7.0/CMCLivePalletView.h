@class NSTimer, AWEAwemeModel, CMC3DBoxTextView, NSString, CMCLivePalletComponentView, UIImageView, CMCLiveTopviewResponseModel, UILabel;

@interface CMCLivePalletView : UIView <CMCLivePalletView>

@property (retain, nonatomic) CMC3DBoxTextView *giftCountView;
@property (retain, nonatomic) UILabel *giftRightLabel;
@property (retain, nonatomic) UILabel *viewerRightLabel;
@property (retain, nonatomic) UILabel *commentLeftLabel;
@property (retain, nonatomic) CMC3DBoxTextView *commentCountView;
@property (retain, nonatomic) CMC3DBoxTextView *viewerCountView;
@property (retain, nonatomic) UIImageView *heartIcon;
@property (retain, nonatomic) CMCLivePalletComponentView *liveRankView;
@property (retain, nonatomic) CMCLivePalletComponentView *viewerAndFansView;
@property (retain, nonatomic) CMCLivePalletComponentView *commentView;
@property (retain, nonatomic) CMCLiveTopviewResponseModel *liveData;
@property (retain, nonatomic) NSTimer *commentInfoUpdateTimer;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) id /* block */ rightConstraintBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createDescLabel:(id)a0;
- (void)setupNewStyleUI;
- (void)setupOldStyleUI;
- (void)onLiveRankViewClicked;
- (void)onViewerAndFansViewClicked;
- (void)onCommentViewClicked;
- (id)createBkgView;
- (void)updateNewStyleWithLiveData:(id)a0;
- (void)updateOldStyleWithLiveData:(id)a0;
- (void)updateCommentInfoPeriodicly;
- (void)updateCommentList:(id)a0;
- (void)updateWithLiveData:(id)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)reset;

@end
