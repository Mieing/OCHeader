@class NSString;

@interface BDPToolBarReddotInfo : NSObject

@property (nonatomic) long long duration;
@property (copy, nonatomic) NSString *slogan;
@property (copy, nonatomic) NSString *target_appId;

+ (void)_getUserOpenIDWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)_getReddotWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)_removeReddotWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)requestToolBarReddotWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)removeReddotWithParams:(id)a0 completion:(id /* block */)a1;

- (void).cxx_destruct;

@end
