@class NSString;

@interface BDPCDDynamicCardBorderModel : NSObject

@property (nonatomic) double size;
@property (nonatomic) long long style;
@property (copy, nonatomic) NSString *color;

- (id)borderStyleDict;
- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end
