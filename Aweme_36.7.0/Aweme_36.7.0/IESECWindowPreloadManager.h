@class NSString, NSMapTable;

@interface IESECWindowPreloadManager : NSObject <IESECWindowPreloadManagerProtocol>

@property (retain, nonatomic) NSMapTable *mapper;
@property (nonatomic) BOOL isPreload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (id)getPreloadCompoentObjectWithCompoent:(id)a0;
- (void)preloadWindowCompoent;
- (void)removeUnusedPreloadCompoent;
- (void)preloadCompoent:(id)a0 number:(long long)a1 model:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
