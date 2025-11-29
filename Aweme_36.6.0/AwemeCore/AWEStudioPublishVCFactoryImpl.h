@class NSString;

@interface AWEStudioPublishVCFactoryImpl : NSObject <AWEStudioPublishVCFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)getAWEVideoNewPublishViewControllerClass;
- (Class)buildDraftBoxCollectionViewControllerClass;
- (Class)getAWECoverPreviewControllerClass;
- (Class)getAWEImageEditPublishPreviewControllerClass;
- (Class)getAWESequencePublishPreviewControllerClass;
- (Class)getAWESlidesCoverChooseViewControllerClass;
- (Class)getAWEVideoCoverChooseViewControllerClass;
- (Class)getAWEPublishPreviewControllerClass;
- (id)buildAWEVideoNewPublishVCWithInputData:(id)a0;
- (Class)getACCPaymentComponentClass;
- (id)buildAWEPublishAdvanceSettingPaymentViewController;
- (id)buildACCDRPublishEndViewControllerWithPublishViewModel:(id)a0;
- (Class)getAWEStudioPersistentLogBizClass;

@end
