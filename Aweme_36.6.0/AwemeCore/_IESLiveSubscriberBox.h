@interface _IESLiveSubscriberBox : NSObject {
    id _subscriber;
    BOOL _enable;
}

- (id)initWithSubscriber:(id)a0;
- (BOOL)isSubscriberEnable;
- (void).cxx_destruct;
- (id)subscriber;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)setEnable:(BOOL)a0;

@end
