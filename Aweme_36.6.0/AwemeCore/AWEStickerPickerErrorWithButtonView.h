@class NSString, UILabel, UIView, UIButton;

@interface AWEStickerPickerErrorWithButtonView : AWEStickerPickerOverlayView <AWEStickerPickerEffectErrorViewProtocol>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIButton *reloadButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) id /* block */ reloadHanlder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
