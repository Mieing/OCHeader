@class NSString, NSDictionary;

@interface CSJJSB3ExecuteUnitModel : NSObject

@property (copy, nonatomic) NSString *JSSDKVersion;
@property (copy, nonatomic) NSString *msgType;
@property (copy, nonatomic) NSString *callbackId;
@property (copy, nonatomic) NSString *func;
@property (copy, nonatomic) NSDictionary *params;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDictionary:(id)a0;

@end
