@class UIColor, NSString, UIImage, NSAttributedString;

@interface AWEHPTabLandingRollBackFloatButtonConfig : NSObject <AWEHPTabLandingRollBackComponentConfigProtocol>

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSAttributedString *richTitle;
@property (nonatomic) double fontSize;
@property (retain, nonatomic) UIImage *leftIcon;
@property (nonatomic) double iconSize;
@property (retain, nonatomic) UIColor *bgColor;
@property (nonatomic) long long autoFoldTime;
@property (nonatomic) long long autoDismissTime;
@property (nonatomic) double bottomOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
