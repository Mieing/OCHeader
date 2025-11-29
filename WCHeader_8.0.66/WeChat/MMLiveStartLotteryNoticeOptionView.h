@class NSString, UIImageView, FinderLiveNoticeInfo, UILabel, UIView;
@protocol MMLiveStartLotteryOptionViewDelegate;

@interface MMLiveStartLotteryNoticeOptionView : UIView <MMLiveStartLotteryOptionViewProviding>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *labelView;
@property (retain, nonatomic) UILabel *placeholderLabel;
@property (retain, nonatomic) UILabel *noticeDescriptionLabel;
@property (retain, nonatomic) UILabel *noticeTimeLabel;
@property (retain, nonatomic) UIImageView *rightChevronView;
@property (retain, nonatomic) UIView *separatorBar;
@property (retain, nonatomic) FinderLiveNoticeInfo *noticeInfo;
@property (retain, nonatomic) NSString *label;
@property (nonatomic) unsigned long long listingPosition;
@property (weak, nonatomic) id<MMLiveStartLotteryOptionViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)noticeStartTimeDisplayString:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)onTapped;
- (void)initializeComponents;
- (void).cxx_destruct;

@end
