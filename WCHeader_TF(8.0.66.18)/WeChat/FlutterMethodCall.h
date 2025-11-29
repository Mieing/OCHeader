@class NSString;

@interface FlutterMethodCall : NSObject

@property (readonly, nonatomic) NSString *method;
@property (readonly, nonatomic) id arguments;

+ (id)methodCallWithMethodName:(id)a0 arguments:(id)a1;

- (id)initWithMethodName:(id)a0 arguments:(id)a1;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
