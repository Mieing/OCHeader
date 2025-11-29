@class UIColor, UIFont, NSString;

@interface DVEMultipleTrackViewConstants : NSObject

@property (class, nonatomic) BOOL isUpgrades;
@property (class, readonly, nonatomic) double minRecordSecond;
@property (class, readonly, nonatomic) double splitSpace;
@property (class, readonly, nonatomic) double minLayoutHeight;
@property (class, readonly, nonatomic) double cellSectionSpace;
@property (class, readonly, nonatomic) double cornerRadius;
@property (class, readonly, nonatomic) double tagCornerRadius;
@property (class, readonly, nonatomic) UIFont *titleFont;
@property (class, readonly, nonatomic) UIFont *soundTitleFont;
@property (class, readonly, nonatomic) UIFont *emojiTitleFont;
@property (class, readonly, nonatomic) UIColor *titleTextColor;
@property (class, readonly, nonatomic) UIColor *titleBackgroundTextColor;
@property (class, readonly, nonatomic) NSString *cellIdentifier;

@end
