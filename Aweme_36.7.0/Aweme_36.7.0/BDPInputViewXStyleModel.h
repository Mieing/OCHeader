@class NSString;

@interface BDPInputViewXStyleModel : NSObject

@property (copy, nonatomic) NSString *color;
@property (copy, nonatomic) NSString *fontWeight;
@property (nonatomic) double fontSize;
@property (copy, nonatomic) NSString *textAlign;
@property (nonatomic) double marginBottom;

- (void).cxx_destruct;
- (void)updateWithDictionary:(id)a0;
- (id)font;
- (long long)textAlignment;

@end
