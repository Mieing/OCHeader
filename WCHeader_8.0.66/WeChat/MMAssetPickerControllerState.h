@class NSArray, NSDictionary, NSString;
@protocol MMAssetPickerUserActionTipsProtocol;

@interface MMAssetPickerControllerState : NSObject

@property (nonatomic) int pickerScene;
@property (nonatomic) long long stateSource;
@property (nonatomic) BOOL isPickerFinished;
@property (retain, nonatomic) NSArray *selectedAssetInfoList;
@property (retain, nonatomic) NSDictionary *pickerExtMap;
@property (nonatomic) long long selectedImageAssetCount;
@property (nonatomic) long long selectedVideoAssetCount;
@property (nonatomic) double selectedVideoSumDuration;
@property (nonatomic) long long userActionCheckScene;
@property (nonatomic) BOOL isUserActionChecked;
@property (nonatomic) BOOL isAsyncCompositeEnabled;
@property (retain, nonatomic) id<MMAssetPickerUserActionTipsProtocol> userActionTipsActivity;
@property (readonly, nonatomic) int pickerScene;
@property (readonly, nonatomic) long long stateSource;
@property (readonly, nonatomic) BOOL isPickerFinished;
@property (readonly, nonatomic) NSArray *selectedAssetInfoList;
@property (readonly, nonatomic) NSDictionary *pickerExtMap;
@property (readonly, nonatomic) long long selectedImageAssetCount;
@property (readonly, nonatomic) long long selectedVideoAssetCount;
@property (readonly, nonatomic) double selectedVideoSumDuration;
@property (readonly, nonatomic) long long userActionCheckScene;
@property (readonly, nonatomic) BOOL isUserActionChecked;
@property (readonly, nonatomic) BOOL isAsyncCompositeEnabled;
@property (nonatomic) int maxImageCount;
@property (nonatomic) BOOL canHybridSendAsset;
@property (nonatomic) BOOL disableVideoSelection;
@property (nonatomic) BOOL canSendVideoMessage;
@property (nonatomic) BOOL videoDirectToEdit;
@property (nonatomic) BOOL canSendMultiImage;
@property (nonatomic) BOOL canSendMultiVideo;
@property (retain, nonatomic) NSString *finishWording;
@property (nonatomic) BOOL isHidePreviewPlayButton;
@property (nonatomic) BOOL enforceUserActionCheck;
@property (nonatomic) BOOL enforceUserActionUnCheck;
@property (nonatomic) BOOL isUserActionSelected;
@property (nonatomic) BOOL isCameraButtonDisabled;
@property (nonatomic) BOOL buttonEnableAfterSend;
@property (retain, nonatomic) NSString *pickerBottomFloatText;
@property (nonatomic) BOOL shouldHidePickerBottomFloatIcon;
@property (nonatomic) BOOL shouldShowPickerBottomFloatViewInitialized;
@property (nonatomic) BOOL shouldShowFinderMJPublisherTemplateComposingButton;
@property (readonly, nonatomic) id<MMAssetPickerUserActionTipsProtocol> userActionTipsActivity;
@property (readonly, nonatomic) BOOL isSelectionFull;

- (void).cxx_destruct;

@end
