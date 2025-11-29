@class NSString, BDPUniqueID;

@interface BDPSonicLoaderService : NSObject <SonicLoaderService>

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)load:(id)a0 callback:(id /* block */)a1;
- (id)loadMedia:(id)a0;
- (void)loadUrl:(id)a0 callback:(id /* block */)a1;
- (BOOL)stopAccpetingEvent;
- (id)load:(id)a0;
- (void).cxx_destruct;
- (id)initWithUniqueID:(id)a0;

@end
