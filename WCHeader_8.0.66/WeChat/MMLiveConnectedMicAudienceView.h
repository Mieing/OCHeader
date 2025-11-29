@class NSString, UILabel, UIImageView;

@interface MMLiveConnectedMicAudienceView : UIView

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIImageView *talkingIconView;
@property (nonatomic) BOOL needHidden;

- (void)updateViews;
- (void)updateText:(id)a0;
- (void)layoutSubviews;
- (double)getConnectedMicAudienceViewWidth;
- (void).cxx_destruct;

@end
