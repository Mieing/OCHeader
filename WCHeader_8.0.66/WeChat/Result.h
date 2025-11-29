@class NSDictionary;

@interface Result : NSObject

@property (nonatomic) BOOL result;
@property (retain, nonatomic) NSDictionary *params;

- (id)initWithResult:(BOOL)a0 params:(id)a1;
- (void).cxx_destruct;

@end
