@interface SideModeStyleSetting : NSObject

@property (nonatomic) double messageListWidth;
@property (nonatomic) double giftMaskAreaHeight;
@property (nonatomic) double giftMaskAreaSafeMargin;
@property (nonatomic) double messageListPadding;

+ (id)shared;

- (id)init;
- (void)_loadDefaults;

@end
