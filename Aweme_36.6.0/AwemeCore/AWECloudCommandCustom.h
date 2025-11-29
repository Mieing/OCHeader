@class NSString;

@interface AWECloudCommandCustom : NSObject <AWECloudCommandProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createInstance;
+ (void)load;

- (void)excuteCommand:(id)a0 completion:(id /* block */)a1;

@end
