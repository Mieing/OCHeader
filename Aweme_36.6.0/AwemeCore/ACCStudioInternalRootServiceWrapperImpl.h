@class NSString, AWEACCStudioCreationServiceImpl;
@protocol AWEStudioPublishService;

@interface ACCStudioInternalRootServiceWrapperImpl : HTSService <AWEStudioInternalServiceWrapper>

@property (retain, nonatomic) id<AWEStudioPublishService> publishService;
@property (retain, nonatomic) AWEACCStudioCreationServiceImpl *creationService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void).cxx_destruct;

@end
