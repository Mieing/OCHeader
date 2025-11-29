@class NSDictionary, NSString;

@interface BDPIMAuthMessagePermissionItemProvider : NSObject <BDPPermissionItemProviderProtocol>

@property (copy, nonatomic) NSDictionary *imAuthMessageInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (void)fetchPermissionItemsWithID:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
