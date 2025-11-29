@class NSString, ACCRecordPropInheritInfo, NSArray, AWEVideoPublishViewModel, IESEffectModel;
@protocol ACCMusicModelProtocol;

@interface ACCRecordViewControllerInputData : NSObject <FPCreationModel, ACCRecodInputDataProtocol, ACCBusinessInputData, ACCRecordViewControllerInputDataExtraDataProtocol, ACCRecordViewControllerPublishModelProtocol>

@property (retain, nonatomic) ACCRecordPropInheritInfo *acc_propInheritInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) id<ACCMusicModelProtocol> sameStickerMusic;
@property (copy, nonatomic) NSString *ugcPathRefer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *groupID;
@property (retain, nonatomic) IESEffectModel *localSticker;
@property (retain, nonatomic) IESEffectModel *duetDefaultSticker;
@property (copy, nonatomic) NSArray *localBindEffects;
@property (nonatomic) BOOL isSplitOrChallenge;
@property (nonatomic) BOOL showStickerPanelAtLaunch;
@property (nonatomic) BOOL useNoneStickerPanelAtLaunch;
@property (copy, nonatomic) NSString *stickerCategoryKey;
@property (nonatomic) BOOL motivationTaskShowPropPanel;
@property (retain, nonatomic) NSString *closeWarning;
@property (copy, nonatomic) IESEffectModel *sameMVTemplateModel;
@property (copy, nonatomic) NSString *statusTemplateId;
@property (copy, nonatomic) IESEffectModel *statusTemplateModel;
@property (retain, nonatomic) NSArray *prioritizedStickers;
@property (copy, nonatomic) NSString *lynxURL;
@property (copy, nonatomic) NSString *lynxDebugURL;
@property (copy, nonatomic) NSString *lynxData;
@property (copy, nonatomic) NSArray *prioritizedStickerIds;
@property (copy, nonatomic) NSString *charityID;
@property (nonatomic) BOOL filterBusiness;
@property (nonatomic) long long needsFilterStickerType;
@property (nonatomic) long long cameraPosition;
@property (nonatomic) long long firstCaptureAppState;
@property (nonatomic) BOOL animated;
@property (nonatomic) long long pastSameWidgetActionType;
@property (nonatomic) BOOL isTriggedWidgetAction;
@property (copy, nonatomic) id /* block */ cancelBlock;

@end
