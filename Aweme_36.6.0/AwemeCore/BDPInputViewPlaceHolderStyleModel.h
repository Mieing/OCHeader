@class NSString;

@interface BDPInputViewPlaceHolderStyleModel : NSObject

@property (nonatomic) double fontSize;
@property (copy, nonatomic) NSString *fontWeight;
@property (copy, nonatomic) NSString *color;

- (id)attributedStyle;
- (void).cxx_destruct;
- (void)updateWithDictionary:(id)a0;
- (id)font;

@end
