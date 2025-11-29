@class UIView, NSString, AttributeLabel, MMWebImageView, MMHeadImageView, UIImageView, MMUIView, AppFileNodeProgressView, MMUILabel, UILabel, MMUIActivityIndicatorView;
@protocol MsgFileBrowseItemViewDelegate;

@interface MsgFileBrowseItemView : MMUIView {
    MMHeadImageView *_headImgView;
    AttributeLabel *_nameLabel;
    AttributeLabel *_statusLabel;
    MMUILabel *_timeLabel;
    MMUIView *_contentBkView;
    MMWebImageView *_thumbView;
    AttributeLabel *_titleLabel;
    AttributeLabel *_detailLabel;
    AttributeLabel *_secondDetailLabel;
    UIView *_markSelectedView;
    UIImageView *_markSelectedImageView;
    UIView *_disabledMaskView;
    MMUIActivityIndicatorView *_downloadingFlower;
    UIImageView *_expiredIcon;
    AppFileNodeProgressView *_circleProgress;
    AttributeLabel *_expireLabel;
    NSString *_name;
    NSString *_title;
    NSString *_detail;
    NSString *_secondDetail;
    NSString *_detailIgnorePrefix;
}

@property (retain, nonatomic) UILabel *thumbDescLabel;
@property (retain, nonatomic) NSString *itemID;
@property (nonatomic) BOOL isSelectable;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) BOOL isLoading;
@property (nonatomic) BOOL isDisabled;
@property (nonatomic) BOOL isExpired;
@property (nonatomic) double circlePercent;
@property (weak, nonatomic) id<MsgFileBrowseItemViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onClickSelect;
- (void)updateWidthMsg:(id)a0;
- (void)setHighlightWord:(id)a0 Detail:(id)a1;
- (id)getThumbImageView;
- (void)sizeToFit;
- (void).cxx_destruct;

@end
