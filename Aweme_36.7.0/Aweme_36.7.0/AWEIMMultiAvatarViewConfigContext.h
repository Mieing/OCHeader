@class NSArray, NSString, UIColor;

@interface AWEIMMultiAvatarViewConfigContext : NSObject

@property (nonatomic) long long style;
@property (retain, nonatomic) NSArray *avatarURLList;
@property (copy, nonatomic) NSString *leftIconName;
@property (copy, nonatomic) NSString *rightIconName;
@property (nonatomic) double avatarWidth;
@property (nonatomic) double avatarBorderWidth;
@property (nonatomic) double borderWidth;
@property (retain, nonatomic) NSArray *avatarArray;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) BOOL needCrop;
@property (nonatomic) BOOL needPlaceholder;
@property (nonatomic) BOOL needRoundRectBg;
@property (nonatomic) int maxAvatarCount;
@property (retain, nonatomic) UIColor *avatarBorderColor;

- (void).cxx_destruct;

@end
