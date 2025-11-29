@class NSDictionary;

@interface CameraParamModel : NSObject <NSCoding>

@property (retain, nonatomic) NSDictionary *paramsMap;

- (id)obtainParamsForClass:(Class)a0;
- (id)initWithParamClasses:(id)a0;
- (void)addParams:(id)a0 withClass:(Class)a1;
- (void)addParams:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
