@class NSString;

@interface BDPInputViewStyleModel : NSObject

@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) double left;
@property (nonatomic) double top;
@property (copy, nonatomic) NSString *backgroundColor;
@property (copy, nonatomic) NSString *color;
@property (copy, nonatomic) NSString *fontWeight;
@property (nonatomic) double fontSize;
@property (copy, nonatomic) NSString *textAlign;
@property (nonatomic) double marginBottom;

- (void).cxx_destruct;
- (void)updateWithDictionary:(id)a0;
- (id)font;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (long long)textAlignment;

@end
