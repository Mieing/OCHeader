@class NSString, UIImageView, UILabel, UIView, UITapGestureRecognizer;

@interface AWEMusicLikeHintView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UILabel *infoLabel;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) UIView *separateLine;
@property (retain, nonatomic) UITapGestureRecognizer *tapGes;
@property (copy, nonatomic) id /* block */ entranceTapped;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addTapGesture;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)init;
- (void)setupView;
- (void)tapped;
- (double)suggestedHeight;

@end
