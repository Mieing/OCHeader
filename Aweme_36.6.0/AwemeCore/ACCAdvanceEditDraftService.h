@class NSString, AWEVideoPublishViewModel;
@protocol DVENLEInterfaceProtocol, DVEEditingContextProtocol, ACCDraftURSFileManager, IESServiceProvider;

@interface ACCAdvanceEditDraftService : NSObject <ACCAEDraftService>

@property (weak, nonatomic) id<DVENLEInterfaceProtocol> nle;
@property (weak, nonatomic) id<DVEEditingContextProtocol> mediaContext;
@property (weak, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (readonly, copy, nonatomic) NSString *projectUUID;
@property (readonly, weak, nonatomic) id<ACCDraftURSFileManager> ursFileManager;
@property (copy, nonatomic) NSString *draftRootPath;
@property (readonly, copy, nonatomic) NSString *currentDraftPath;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyToDraft:(id)a0 forResourceNode:(id)a1;
- (id)copyToDraft:(id)a0 withResourceType:(unsigned long long)a1;
- (id)convertResourceToDraftRelativePath:(id)a0 resourceType:(unsigned long long)a1;
- (id)folderForResourceType:(unsigned long long)a0;
- (id)initWithPublishView:(id)a0 serviceProvider:(id)a1;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
