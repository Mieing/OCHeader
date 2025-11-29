@class AWEStoryColor, AWEStoryFontModel;

@interface AWETextStickerStylePreferenceModel : NSObject <NSCopying>

@property (nonatomic) BOOL enableUsingUserPreference;
@property (retain, nonatomic) AWEStoryFontModel *preferenceTextFont;
@property (retain, nonatomic) AWEStoryColor *preferenceTextColor;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
