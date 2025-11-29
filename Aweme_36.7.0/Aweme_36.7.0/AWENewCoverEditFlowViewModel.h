@class ACCCameraSubscription, NSString, RACSignal, AWEResourceUploadParametersResponseModel;

@interface AWENewCoverEditFlowViewModel : NSObject <ACCVideoEditFlowControlService>

@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (readonly, nonatomic) BOOL isQuickPublishBubbleShowed;
@property (readonly, nonatomic) AWEResourceUploadParametersResponseModel *uploadParamsCache;
@property (readonly, nonatomic) RACSignal *willEnterSecondPanelSignal;
@property (readonly, nonatomic) RACSignal *didExitSecondPanelSignal;
@property (readonly, nonatomic) RACSignal *didClickBackActionSignal;
@property (readonly, nonatomic) BOOL hasEditClipAfterSave;
@property (readonly, nonatomic) BOOL isStickerEditedAfterSave;
@property (readonly, nonatomic) BOOL imageTemplateInfoDidEditAfterSave;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
