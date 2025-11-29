@class NSString, UIView, RichTextView, NSMutableArray;
@protocol WCFinderModifiedPanelViewDelegate;

@interface WCFinderModifiedPanelView : MMUIView <WCFinderModifiedLogBannerViewDelegate>

@property (nonatomic) long long modifyDescMaxCount;
@property (nonatomic) long long modifyTitleMaxCount;
@property (retain, nonatomic) RichTextView *modifyDescLabel;
@property (retain, nonatomic) NSMutableArray *descBannerArray;
@property (retain, nonatomic) RichTextView *modifyTitleLabel;
@property (retain, nonatomic) NSMutableArray *titleBannerArray;
@property (retain, nonatomic) UIView *containerView;
@property (weak, nonatomic) id<WCFinderModifiedPanelViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildPanelViewByContainerWidth:(double)a0 modifyDescMaxCount:(long long)a1 modifyTitleMaxCount:(long long)a2;

- (void)updateDescModifyModelArray:(id)a0;
- (void)updateTitleModifyModelArray:(id)a0;
- (long long)getDescChangeCount;
- (long long)getTitleChangeCount;
- (void)displayOnView:(id)a0;
- (void)layoutContainerView:(id)a0;
- (void)layoutTitleRichTextView:(id)a0 text:(id)a1 topLine:(double)a2;
- (double)layoutBannerContainer:(id)a0 bannerViewArray:(id)a1 topLine:(double)a2;
- (void)onModifiedLogBannerClearModel:(id)a0;
- (void)onModifiedLogBannerClickToTextView:(id)a0;
- (void).cxx_destruct;

@end
