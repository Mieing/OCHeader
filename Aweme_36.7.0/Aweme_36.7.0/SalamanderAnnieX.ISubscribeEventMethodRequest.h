@class NSString;

@interface SalamanderAnnieX.ISubscribeEventMethodRequest : NSObject {
    void /* function */ eventName;
}

@property (nonatomic, copy) NSString *eventName;
@property (nonatomic) double timestamp;

- (id)initWithEventName:(id)a0 timestamp:(double)a1;
- (void).cxx_destruct;
- (id)init;

@end
