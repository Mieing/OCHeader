@class UIFont;

@interface WCFinderTabFontFactory : NSObject

@property (nonatomic) double size;
@property (retain, nonatomic) UIFont *bold;
@property (retain, nonatomic) UIFont *regular;
@property (nonatomic) double boldWeight;
@property (nonatomic) double regularWeight;
@property (nonatomic) long long fontStyle;

- (id)initWithSize:(double)a0 fontStyle:(long long)a1;
- (double)fontSize;
- (id)fontWithValue:(double)a0;
- (double)_readFontWeight:(id)a0;
- (void).cxx_destruct;

@end
