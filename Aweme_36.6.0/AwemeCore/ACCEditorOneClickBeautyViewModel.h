@class NSString, NSHashTable, AWEVideoPublishViewModel, NSNumber;
@protocol ACCEditServiceProtocol, IESServiceProvider;

@interface ACCEditorOneClickBeautyViewModel : NSObject <ACCEditorOneClickBeautyService>

@property (weak, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (retain, nonatomic) NSHashTable *handlers;
@property (nonatomic) BOOL shouldProcessTag;
@property (copy, nonatomic) NSString *currentTaskIdentifier;
@property (readonly, copy, nonatomic) NSNumber *needIntelliAlbumScan;
@property (readonly, copy, nonatomic) NSNumber *needShowSwitchButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)preloadData;
- (void)executeRemoveAction;
- (id)initWithPublishModel:(id)a0 serviceProvider:(id)a1;
- (void)executeApplyActionWithCompletion:(id /* block */)a0;
- (id)improveMethod;
- (void)handleResultWithCompletion:(id /* block */)a0 trackInfo:(id)a1 currentTaskId:(id)a2;
- (void).cxx_destruct;
- (void)addActionHandler:(id)a0;

@end
