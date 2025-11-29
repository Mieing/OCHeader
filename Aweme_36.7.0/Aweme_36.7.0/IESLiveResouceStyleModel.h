@class NSNumber, UIColor, UIFont;

@interface IESLiveResouceStyleModel : NSObject

@property (retain, nonatomic) NSNumber *clipsToBounds;
@property (retain, nonatomic) UIColor *backgroudColor;
@property (retain, nonatomic) NSNumber *alpha;
@property (retain, nonatomic) UIColor *borderColor;
@property (retain, nonatomic) NSNumber *borderWidth;
@property (retain, nonatomic) NSNumber *cornerRadius;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;

+ (double)fontWeightFromStr:(id)a0;

- (id)fontWithName:(id)a0 size:(double)a1 assetBundle:(id)a2;
- (id)customFontWithPath:(id)a0 size:(double)a1;
- (id)initWithDictionary:(id)a0 assetBundle:(id)a1;
- (void).cxx_destruct;

@end
