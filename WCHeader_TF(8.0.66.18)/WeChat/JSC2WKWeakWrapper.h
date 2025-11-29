@class NSObject;
@protocol OS_xpc_object;

@interface JSC2WKWeakWrapper : NSObject

@property (weak, nonatomic) NSObject<OS_xpc_object> *connection;

- (void).cxx_destruct;

@end
