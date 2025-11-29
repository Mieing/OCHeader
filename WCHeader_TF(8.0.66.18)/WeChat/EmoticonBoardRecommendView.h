@class UIButton, NSString, EmoticonTabRecommendItem, MMEmoticonStoreDownloadLogic, UIView, MMWebImageView, UILabel;
@protocol EmoticonBoardRecommendViewDelegate;

@interface EmoticonBoardRecommendView : UIView <MMEmoticonStoreDownloadLogicDelegate> {
    UIView *m_contentView;
    MMWebImageView *m_imageView;
    UILabel *m_titleLabel;
    UILabel *m_recWordLabel;
    UIButton *m_showDetailButton;
    EmoticonTabRecommendItem *m_item;
    UIButton *m_closeButton;
}

@property (retain, nonatomic) MMEmoticonStoreDownloadLogic *downloadLogic;
@property (weak, nonatomic) id<EmoticonBoardRecommendViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateContentView;
- (void)updateImageView;
- (void)updateTitleLabel;
- (void)updateRecWordLabel;
- (void)updateDownloadView;
- (void)updateShowDetailButton;
- (void)updateCloseButton;
- (void)onClickCloseButton;
- (void)updateItem:(id)a0;
- (void)onViewTap;
- (void)onTapGetEmoticonBtnFor:(unsigned long long)a0;
- (void).cxx_destruct;

@end
