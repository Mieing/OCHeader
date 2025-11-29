@class NSString;

@interface DTRpcMethodMXXT : NSObject

@property (copy, nonatomic) NSString *operationType;
@property (nonatomic) Class resultClass;
@property (copy, nonatomic) NSString *returnType;
@property (nonatomic) BOOL checkLogin;
@property (nonatomic) Class elementClass;

- (void).cxx_destruct;

@end
