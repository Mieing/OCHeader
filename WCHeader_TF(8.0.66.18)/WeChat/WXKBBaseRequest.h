@class NSString;

@interface WXKBBaseRequest : NSObject

@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) unsigned int timestamp;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;

- (BOOL)checkTime;
- (void).cxx_destruct;

@end
