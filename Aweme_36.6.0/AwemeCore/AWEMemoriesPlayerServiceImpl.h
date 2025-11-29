@class NSString;

@interface AWEMemoriesPlayerServiceImpl : NSObject <AWEMemoriesPlayerServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createMemoriesPlayerModelWithAwemeModel:(id)a0;
- (id)createMemoriesPlayerModelWithPHAsset:(id)a0;
- (id)createMemoriesPlayerDataController;
- (id)createMemoriesPlayerContainerViewControllerWithDataController:(id)a0;
- (id)createMemoriesPlayerConfigManager;
- (id)createMemoriesPlayerControlManager;

@end
