@class NSString;

@interface CSSValue : NSObject

@property (retain, nonatomic) NSString *cssText;
@property (nonatomic) int cssValueType;

- (void).cxx_destruct;
- (id)init;
- (id)initWithUnitType:(int)a0;

@end
