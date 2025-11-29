@class NSString;

@interface WCPaySetPayUserDutyCgiResp : NSObject

@property (nonatomic) unsigned int retcode;
@property (retain, nonatomic) NSString *retmsg;

+ (id)genFromDictionary:(id)a0;

- (void).cxx_destruct;

@end
