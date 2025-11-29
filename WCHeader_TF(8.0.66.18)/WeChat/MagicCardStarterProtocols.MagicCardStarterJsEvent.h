@class NSString, NSDictionary;

@interface MagicCardStarterProtocols.MagicCardStarterJsEvent : NSObject {
    void /* unknown type, empty encoding */ eventName;
    void /* unknown type, empty encoding */ eventData;
}

@property (nonatomic, copy) NSString *eventName;
@property (nonatomic, copy) NSDictionary *eventData;

- (id)initWithEventName:(id)a0 eventData:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
