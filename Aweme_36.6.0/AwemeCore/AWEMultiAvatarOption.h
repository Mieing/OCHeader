@class UIColor, UIImage, NSString;

@interface AWEMultiAvatarOption : NSObject <IESIMMultiAvatarViewOptionsProtocol>

@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) BOOL needCrop;
@property (nonatomic) long long direction;
@property (nonatomic) BOOL isLeftOnTop;
@property (nonatomic) BOOL needPlaceholder;
@property (retain, nonatomic) UIImage *avatarPaceholderImage;
@property (nonatomic) BOOL needRoundRectBg;
@property (nonatomic) double paddingWidth;
@property (nonatomic) double borderWidth;
@property (nonatomic) double avatarBorderWidth;
@property (retain, nonatomic) UIColor *avatarBorderColor;
@property (nonatomic) long long frameType;
@property (nonatomic) BOOL customLayerCenter;
@property (nonatomic) long long moreAvatarCount;
@property (copy, nonatomic) id /* block */ performAllImageLoadFinishBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) BOOL needCrop;
@property (nonatomic) long long direction;
@property (nonatomic) BOOL isLeftOnTop;
@property (nonatomic) BOOL needPlaceholder;
@property (retain, nonatomic) UIImage *avatarPaceholderImage;
@property (nonatomic) BOOL needRoundRectBg;
@property (nonatomic) double paddingWidth;
@property (nonatomic) double borderWidth;
@property (nonatomic) double avatarBorderWidth;
@property (retain, nonatomic) UIColor *avatarBorderColor;
@property (nonatomic) long long frameType;
@property (nonatomic) BOOL customLayerCenter;
@property (nonatomic) long long moreAvatarCount;
@property (copy, nonatomic) id /* block */ performAllImageLoadFinishBlock;

+ (id)initWithColorNamed:(id)a0;

- (void).cxx_destruct;
- (id)init;

@end
