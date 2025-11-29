@class NSString, WCFinderHeadImageView, UIImage, UIView, WCFinderContact;

@interface MMFinderLiveConnectMicAudioUserBackgroundView : UIView <WCFinderHeadImageViewDelegate>

@property (retain, nonatomic) WCFinderContact *finderContact;
@property (retain, nonatomic) WCFinderHeadImageView *backgroundHeadImageView;
@property (retain, nonatomic) UIView *audioUserBlurView;
@property (retain, nonatomic) UIImage *backgroundHeadImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getUserBlurEffectImage:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andFinderContact:(id)a1;
- (id)initWithFinderContact:(id)a0;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)finderHeadImageViewLoadUrlImageFinished:(id)a0 image:(id)a1 urlString:(id)a2;
- (void).cxx_destruct;

@end
