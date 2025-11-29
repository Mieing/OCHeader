@class UIView, MMWebImageView, FinderLiveNoticeInfo, NSAttributedString, NextLiveNotificationButton, FinderObject, YYLabel, MMUILabel, MMUIButton, UIScrollView;
@protocol WCFinderLiveCompleteLiveContentViewDelegate;

@interface WCFinderLiveCompleteLiveContentView : UIView {
    UIScrollView *_liveContainerView;
    YYLabel *_liveDetailLabel;
    YYLabel *_liveCaculateDetailLabel;
}

@property (readonly, nonatomic) UIScrollView *liveContainerView;
@property (retain, nonatomic) MMWebImageView *coverView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *timeLabel;
@property (retain, nonatomic) MMUIButton *actionButton;
@property (readonly, nonatomic) YYLabel *liveDetailLabel;
@property (readonly, nonatomic) YYLabel *liveCaculateDetailLabel;
@property (nonatomic) double liveDetailLabelHeight;
@property (retain, nonatomic) FinderLiveNoticeInfo *liveNoticeInfo;
@property (retain, nonatomic) FinderObject *finderObject;
@property (retain, nonatomic) NextLiveNotificationButton *nextLiveNotificationButton;
@property (retain, nonatomic) UIView *sepelateLine;
@property (retain, nonatomic) NSAttributedString *originAttributedString;
@property (retain, nonatomic) NSAttributedString *expandAttributedString;
@property (retain, nonatomic) NSAttributedString *packAttributedString;
@property (nonatomic) unsigned long long contentType;
@property (nonatomic) BOOL nextLiveReserved;
@property (weak, nonatomic) id<WCFinderLiveCompleteLiveContentViewDelegate> delegate;
@property (nonatomic) unsigned long long detailLabelState;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (void)layoutUIWhenLive;
- (void)layoutUIWhenLivePreview;
- (void)layoutUIWhenNextLiveNotification;
- (BOOL)isPreviewNoneIntroduction;
- (void)layoutActionButtonWhenClickWithType:(unsigned long long)a0;
- (void)updateViewWithType:(unsigned long long)a0 finderObject:(id)a1 liveNoticeInfo:(id)a2 nextLiveNotificationButton:(id)a3;
- (void)updateData;
- (void)updateContentViewAction:(id)a0;
- (void)updateDataWhenLive;
- (void)updateDataWhenLivePreview;
- (void)updateDataWhenNextLiveNotification;
- (BOOL)isLabelOverWidth:(id)a0;
- (double)getHeightWithType:(unsigned long long)a0 finderObject:(id)a1 liveNoticeInfo:(id)a2 detailLabelState:(unsigned long long)a3;
- (double)getCurrentViewHeight:(id)a0 font:(id)a1 detailLabelState:(unsigned long long)a2;
- (id)getAttributedStringWithOriginString:(id)a0 font:(id)a1;
- (id)getPackAttributedStringWithFont:(id)a0;
- (id)getTruncationTokenAttributedStringWithFont:(id)a0;
- (id)getExpandAttributedStringWithFont:(id)a0;
- (struct CGSize { double x0; double x1; })sizeLabelToFit:(id)a0 width:(double)a1 height:(double)a2;
- (void)updateCurrentContentViewHeight:(unsigned long long)a0;
- (void)actionButtonClick:(id)a0;
- (void).cxx_destruct;

@end
