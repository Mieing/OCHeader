@class WCDataItem, WCAdRockPaperScissorsLogic, NSString, WCAdRockPaperScissorsTitleAreaView, WCAdRockPaperScissorsTopBannerView, WCAdRockPaperScissorsInfo;
@protocol WCAdRockPaperScissorsViewDelegate;

@interface WCAdRockPaperScissorsView : WCAdBaseBarView <WCAdRockPaperScissorsTopBannerDelegate, WCAdRockPaperScissorsTitleAreaDelegate, WCAdRockPaperScissorsLogicDelegate>

@property (retain, nonatomic) WCDataItem *dataItem;
@property (nonatomic) unsigned long long itemScene;
@property (retain, nonatomic) WCAdRockPaperScissorsInfo *adRockPaperScissorsInfo;
@property (retain, nonatomic) WCAdRockPaperScissorsLogic *rockPaperScissorsLogic;
@property (retain, nonatomic) WCAdRockPaperScissorsTopBannerView *topBannerView;
@property (retain, nonatomic) WCAdRockPaperScissorsTitleAreaView *titleAreaView;
@property (weak, nonatomic) id<WCAdRockPaperScissorsViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)viewHeight:(id)a0 maxWidth:(double)a1;
+ (double)topMargin:(id)a0 maxWidth:(double)a1;
+ (double)bottomMargin;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dataItem:(id)a1 contentItemScene:(unsigned long long)a2;
- (void)generateSubviews;
- (void)layoutSubviews;
- (void)prepare;
- (void)start;
- (void)pause;
- (void)stop;
- (id)onTopBannerFetchLogic;
- (void)onTopBannerButtonClicked;
- (id)onTitleAreaFetchLogic;
- (id)fetchAdOperationLogicKey;
- (void)onRockPaperScissorsNotifyCanvasDidBePopedWithDataItem:(id)a0 showComment:(BOOL)a1;
- (void)prepareForUpdateDataItem;
- (void)updateDataItem:(id)a0;
- (void).cxx_destruct;

@end
