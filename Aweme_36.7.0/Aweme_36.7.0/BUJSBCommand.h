@class NSString, NSDictionary;

@interface BUJSBCommand : NSObject

@property (copy, nonatomic) NSString *messageType;
@property (copy, nonatomic) NSString *eventID;
@property (copy, nonatomic) NSString *callbackID;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSString *fullName;
@property (copy, nonatomic) NSString *origName;
@property (copy, nonatomic) NSString *className;
@property (copy, nonatomic) NSString *methodName;
@property (copy, nonatomic) NSString *JSSDKVersion;

- (id)toJSONString;
- (void)amendDynamicPluginNameWithFullName:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictonary:(id)a0;

@end
