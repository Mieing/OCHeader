@class NSString;

@interface BDPTextAreaStyleModel : NSObject

@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) double minHeight;
@property (nonatomic) double maxHeight;
@property (copy, nonatomic) NSString *color;
@property (copy, nonatomic) NSString *fontWeight;
@property (nonatomic) double fontSize;
@property (nonatomic) double lineSpace;
@property (copy, nonatomic) NSString *textAlign;
@property (nonatomic) double marginBottom;

- (void).cxx_destruct;
- (void)updateWithDictionary:(id)a0;
- (id)font;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (long long)textAlignment;

@end
