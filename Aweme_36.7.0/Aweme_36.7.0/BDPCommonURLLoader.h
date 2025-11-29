@class NSString;

@interface BDPCommonURLLoader : NSObject <BDPURLLoaderProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)loadDataWithUrl:(id)a0 uniqueID:(id)a1 completion:(id /* block */)a2;

@end
