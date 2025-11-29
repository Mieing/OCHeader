@class NSString;

@interface PIABridgeAPIInfo : NSObject

@property (copy, nonatomic) NSString *APIName;
@property (copy, nonatomic) id /* block */ APIHandler;
@property (nonatomic) long long version;
@property (nonatomic) BOOL isSynchronous;
@property (nonatomic) BOOL isOnMainThread;

+ (id)APIInfoWithName:(id)a0 version:(long long)a1 isSynchronous:(BOOL)a2 isOnMainThread:(BOOL)a3 APIHandler:(id /* block */)a4;
+ (id)APIInfoWithName:(id)a0 version:(long long)a1 APIHandler:(id /* block */)a2;

- (id)initWithName:(id)a0 version:(long long)a1 isSynchronous:(BOOL)a2 isOnMainThread:(BOOL)a3 APIHandler:(id /* block */)a4;
- (void).cxx_destruct;

@end
