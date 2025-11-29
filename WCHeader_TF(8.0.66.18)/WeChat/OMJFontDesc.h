@class NSString;

@interface OMJFontDesc : NSObject

@property (readonly, nonatomic) NSString *fontName;
@property (readonly, nonatomic) double fontSize;

- (id)initWithFontName:(id)a0 fontSize:(double)a1;
- (id)initWithFamilyName:(id)a0 fontWeight:(unsigned long long)a1 fontSize:(double)a2;
- (id)calcFontNameWithFamilyName:(id)a0 fontWeight:(unsigned long long)a1;
- (void).cxx_destruct;

@end
