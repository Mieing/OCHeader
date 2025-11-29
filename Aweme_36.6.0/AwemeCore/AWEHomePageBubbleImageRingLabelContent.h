@class NSString, AWEHomePageBubbleImageRingLabelContentConfig, UIImage, UILabel, AFDColorRingAvatarView;

@interface AWEHomePageBubbleImageRingLabelContent : UIView <AWEHomePageBubbleContentProtocol>

@property (retain, nonatomic) AWEHomePageBubbleImageRingLabelContentConfig *config;
@property (retain, nonatomic) AFDColorRingAvatarView *avatarView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImage *placeHolder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)awe_themeDidChange:(long long)a0;
- (void)setupWithConfig:(id)a0;
- (id)getContentViewWithConfig:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)updateUI;
- (void)updateImageView;

@end
