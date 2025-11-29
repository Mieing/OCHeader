@interface AWESubscribeNetworkRequest : NSObject

+ (void)removeSubscribeCards:(id)a0 onComplete:(id /* block */)a1;
+ (id)paramWithCursor:(long long)a0 requestType:(unsigned long long)a1 limit:(long long)a2 hintCardId:(long long)a3 hintReceiveTime:(long long)a4;
+ (void)requestSubscribeCardWithParams:(id)a0 onComplete:(id /* block */)a1;
+ (void)setSubscribeMute:(BOOL)a0 onComplete:(id /* block */)a1;
+ (void)requestPreSubscribeListWithHintCardId:(long long)a0 hintReceiveTime:(long long)a1 onComplete:(id /* block */)a2;
+ (void)removeSubscribeBoxComplete:(id /* block */)a0;
+ (id)arrayToJSONString:(id)a0;

@end
