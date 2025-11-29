@class NSString, TTTAttributedLabel, AWEUIButton, UILabel, UIImageView, UIView;

@interface AWEMediaDownloadBarView : UIView <TTTAttributedLabelDelegate>

@property (retain, nonatomic) AWEUIButton *cancelButton;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) TTTAttributedLabel *retryLabel;
@property (retain, nonatomic) UILabel *progressLabel;
@property (retain, nonatomic) UIImageView *statusIconView;
@property (retain, nonatomic) UIView *blurView;
@property (copy, nonatomic) id /* block */ retryBlock;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (nonatomic) double height;
@property (retain, nonatomic) NSString *progressFormat;
@property (nonatomic) long long downloadBarViewMode;
@property (nonatomic) double progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)attributedLabel:(id)a0 didSelectLinkWithTransitInformation:(id)a1;
- (void)setRetryLabelAttributed;
- (id)initWithMode:(long long)a0 progress:(double)a1 retryBlock:(id /* block */)a2 cancelBlock:(id /* block */)a3;
- (void).cxx_destruct;
- (void)_updateProgress;
- (void)_setupSubviews;
- (void)_retry:(id)a0;

@end
