@class NSString;

@interface QGPEvent : QGPBaseModel

@property (retain, nonatomic) NSString *eventType;
@property (retain, nonatomic) NSString *layerId;

+ (id)errorMsgForCode:(long long)a0;

- (id)init;
- (void).cxx_destruct;

@end
