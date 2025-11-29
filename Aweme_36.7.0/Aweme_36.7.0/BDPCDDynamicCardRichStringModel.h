@class NSString;

@interface BDPCDDynamicCardRichStringModel : BDPCDDynamicCardUIPropsModel

@property (nonatomic) double fontWeight;
@property (copy, nonatomic) NSString *color;
@property (nonatomic) double fontSize;
@property (copy, nonatomic) NSString *textContent;

- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end
