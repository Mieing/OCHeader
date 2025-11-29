@class NSString, NSMutableDictionary;

@interface SalamanderAnnieX.IPublishEventMethodRequest : NSObject {
    void /* function */ eventName;
    void /* unknown type, empty encoding */ isBroadcast;
}

@property (nonatomic, copy) NSString *eventName;
@property (nonatomic) double timestamp;
@property (nonatomic, retain) NSMutableDictionary *params;

- (void).cxx_destruct;
- (id)init;

@end
