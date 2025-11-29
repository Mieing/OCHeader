@class NSString, AWEVideoPublishViewModel;
@protocol ACCCreationUIHandlerInternalProtocol, ACCCreationDataInternalProtocol, IESServiceProvider;

@interface ACCCreationToolManager : NSObject <ACCCreationToolManager>

@property (retain, nonatomic) id<ACCCreationDataInternalProtocol> holdingCreationData;
@property (retain, nonatomic) id<ACCCreationUIHandlerInternalProtocol> holdingUIHandler;
@property (retain, nonatomic) AWEVideoPublishViewModel *repoContainer;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)creationFinish;
- (void)quitCreation;
- (void)customCreation:(id)a0;
- (void)customCreationWithAssets:(id)a0;
- (void)customCreationWithAssets:(id)a0 directFinish:(BOOL)a1;
- (void).cxx_destruct;

@end
