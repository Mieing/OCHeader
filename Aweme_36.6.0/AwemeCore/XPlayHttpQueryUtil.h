@interface XPlayHttpQueryUtil : NSObject

+ (void)getGameQueryInfoWithBatManID:(id)a0 completion:(id /* block */)a1;
+ (void)getOpenActionWithBatManID:(id)a0 deviceID:(id)a1 actions:(id)a2 completion:(id /* block */)a3;
+ (void)postOpenActionWithBatManID:(id)a0 deviceID:(id)a1 action:(unsigned long long)a2 completion:(id /* block */)a3;

@end
