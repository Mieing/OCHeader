@class NSString;

@interface AWECloudCommandStat : NSObject <AWECloudCommandProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createInstance;
+ (void)load;

- (id)_resultWithCommand:(id)a0;
- (void)excuteCommand:(id)a0 completion:(id /* block */)a1;

@end
