@class NSString, UIImageView, UILabel, UIButton;
@protocol WCFinderFeedDetailStatusViewDelegate;

@interface WCFinderFeedDetailStatusView : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIButton *closeBtn;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long uiStyle;
@property (weak, nonatomic) id<WCFinderFeedDetailStatusViewDelegate> delegate;
@property (copy, nonatomic) NSString *showText;
@property (nonatomic) BOOL disableLayout;
@property (nonatomic) BOOL layoutForState;

- (void)layoutSubviews;
- (id)backgroundColorForUIStyle:(unsigned long long)a0;
- (id)labelColorForUIStyle:(unsigned long long)a0;
- (void)goBack;
- (void).cxx_destruct;

@end
