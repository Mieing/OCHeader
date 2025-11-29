@class NSNumber, NSString, NSData;

@interface BDPBindingWebSocketOperate : NSObject

@property (copy, nonatomic) NSNumber *socketTaskId;
@property (copy, nonatomic) NSString *operationType;
@property (copy, nonatomic) NSData *data;
@property (copy, nonatomic) NSString *string;
@property (copy, nonatomic) NSNumber *code;
@property (copy, nonatomic) NSString *reason;

- (BOOL)bd_modelSetWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
