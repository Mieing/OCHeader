@class NSString;

@interface BDPCDDynamicCardBusinessTagTextModel : NSObject

@property (copy, nonatomic) NSString *background;
@property (copy, nonatomic) NSString *color;
@property (nonatomic) double fontSize;
@property (copy, nonatomic) NSString *textContent;

- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end
