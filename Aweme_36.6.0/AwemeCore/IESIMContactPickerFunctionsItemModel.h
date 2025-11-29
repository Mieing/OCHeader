@class UIColor, UIImage, NSString;

@interface IESIMContactPickerFunctionsItemModel : NSObject

@property (retain, nonatomic) UIColor *backgroudColor;
@property (retain, nonatomic) UIImage *avatarImage;
@property (copy, nonatomic) NSString *avatarImageName;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *iconImageName;
@property (retain, nonatomic) UIColor *avatarBackgroudColor;
@property (nonatomic) long long avatarImageContentMode;
@property (nonatomic) double roundRadius;
@property (nonatomic) unsigned long long roundCorners;
@property (nonatomic) BOOL needBottomLine;
@property (copy, nonatomic) id /* block */ didSelectBlock;

- (void)updateAvatarBackgroupColor:(id)a0;
- (void)updateIconImageName:(id)a0;
- (void)updateAvatarImageName:(id)a0;
- (void)updateSubTitle:(id)a0;
- (void)updateAvatarImageContentMode:(long long)a0;
- (void)updateRoundCorners:(unsigned long long)a0 radius:(double)a1;
- (void)updateNeedBottomLine:(BOOL)a0;
- (void).cxx_destruct;
- (void)updateBackgroundColor:(id)a0;
- (void)updateAvatarImage:(id)a0;
- (void)updateTitle:(id)a0;

@end
