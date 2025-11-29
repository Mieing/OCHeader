@interface BDPStarkPlatform : BDPGamePlatformBase

- (void)load:(id)a0 callback:(id /* block */)a1;
- (id)loadMedia:(id)a0;
- (BOOL)stopAccpetingEvent;
- (id)loadLocalFileWithPath:(id)a0;
- (id)loadSCCoreContent:(id)a0;
- (id)load:(id)a0;
- (void)dealloc;
- (id)initWithUniqueID:(id)a0;
- (id)getUserName;

@end
