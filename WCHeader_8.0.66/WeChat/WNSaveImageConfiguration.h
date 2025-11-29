@class UIColor, UIFont, NSMutableArray;

@interface WNSaveImageConfiguration : NSObject <NSCopying>

@property (nonatomic) long long imageType;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) long long textAlignment;
@property (nonatomic) double visibleHeight;
@property (nonatomic) double squareHeight;
@property (retain, nonatomic) UIFont *longImageFont;
@property (retain, nonatomic) UIFont *squareImageFont;
@property (nonatomic) double scale;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *logoColor;
@property (nonatomic) unsigned long long colorType;
@property (retain, nonatomic) NSMutableArray *arrSelectedIndex;

- (id)initSaveImageConfigWithType:(long long)a0 andTextAlignment:(long long)a1 andVisibleHeight:(double)a2 andSquareHeight:(double)a3 isDarkMode:(BOOL)a4;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
