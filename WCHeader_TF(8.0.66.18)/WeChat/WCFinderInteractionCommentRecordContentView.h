@class UIView, NSString, UIImageView, UILabel, WCFinderInteractionCommentRecordConfiguration, WCFinderRichTextView;
@protocol UIContentConfiguration;

@interface WCFinderInteractionCommentRecordContentView : UIView <UIContentView>

@property (retain, nonatomic) UILabel *feedTypeTag;
@property (copy, nonatomic) WCFinderInteractionCommentRecordConfiguration *appliedConfiguration;
@property (retain, nonatomic) UILabel *dateLabel;
@property (retain, nonatomic) WCFinderRichTextView *commentLabel;
@property (retain, nonatomic) UIView *quoteIndicator;
@property (retain, nonatomic) WCFinderRichTextView *quoteContentLabel;
@property (retain, nonatomic) UIImageView *thumbImage;
@property (retain, nonatomic) UIView *separator;
@property (copy, nonatomic) id<UIContentConfiguration> configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cellHeightWithConfiguration:(id)a0 containerWidth:(double)a1;

- (id)initWithConfiguration:(id)a0;
- (void)_setupUI;
- (void)_setupLayout;
- (void)layoutSubviews;
- (void)_applyConfiguration:(id)a0;
- (void)_updateUI;
- (void)_updateLayout;
- (void).cxx_destruct;

@end
