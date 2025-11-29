@class NSString;

@interface IESJSMethod : NSObject

@property (copy, nonatomic) NSString *bridgeName;
@property (copy, nonatomic) NSString *methodName;
@property (readonly, copy, nonatomic) NSString *fullName;

+ (id)jsMethodWithBridgeName:(id)a0 methodName:(id)a1;

- (void).cxx_destruct;

@end
