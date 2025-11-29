@class NSLock, NSMapTable, NSString;

@interface BDLGeckoTemplateManager : NSObject <BDLTemplateProtocol>

@property (retain, nonatomic) NSMapTable *dataUpdateBlocks;
@property (retain, nonatomic) NSLock *blocksLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)lynxLazyLoad;
+ (id)sharedInstance;

- (id)rootDirForGroupID:(id)a0;
- (id)fileForGroupID:(id)a0;
- (void)registerDataUpdate:(id /* block */)a0 forGroupID:(id)a1;
- (void)geckoDataUpdate:(id)a0 succeed:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (id)defaultGroupID;

@end
