@class NSValue;

@interface BCAAServiceModel : NSObject

@property (readonly, nonatomic) Class serviceCls;
@property (readonly, nonatomic) NSValue *instancePointer;

- (id)initWithClass:(Class)a0 pointer:(void /* function */ *)a1;
- (void).cxx_destruct;

@end
