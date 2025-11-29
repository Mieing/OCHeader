@class NSString, NSDictionary, NSObject;

@interface BDPBulletPluginEventModel : NSObject

@property (weak, nonatomic) NSObject *subscriber;
@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) id /* block */ eventCallback;
@property (retain, nonatomic) NSDictionary *extraDict;

+ (id)eventWithName:(id)a0 eventCallback:(id /* block */)a1;

- (void)attachSubscriber:(id)a0;
- (id)getAttachedSubscriber;
- (void).cxx_destruct;

@end
