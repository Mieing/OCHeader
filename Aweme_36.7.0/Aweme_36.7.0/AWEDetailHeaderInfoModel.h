@class AWEAweMVTemplateModel, NSString, AWEDetailURLModel, AWEDetailMVMaterialSlotsModel, AWECodeGenUrlModel, ACCAIGCLoraPersonInfo, AWEDetailActivityLinkModel, AWEDetailHeaderActivityModel, AWEDetailUserProfileModel, AWEDetailCommerceSponsorProfileModel;

@interface AWEDetailHeaderInfoModel : AWEDetailCommonDiffableModel

@property (nonatomic) BOOL isSkeleton;
@property (retain, nonatomic) AWEDetailURLModel *iconURLModel;
@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *titleSuffix;
@property (copy, nonatomic) NSString *detailContentText;
@property (copy, nonatomic) NSString *themeCoverURI;
@property (nonatomic) long long userCount;
@property (retain, nonatomic) AWEDetailUserProfileModel *authorModel;
@property (retain, nonatomic) AWEDetailCommerceSponsorProfileModel *sponsorModel;
@property (retain, nonatomic) AWEDetailUserProfileModel *welfareAuthorModel;
@property (nonatomic) long long collectState;
@property (nonatomic) long long collectLocation;
@property (nonatomic) long long shareState;
@property (nonatomic) BOOL shareHidden;
@property (nonatomic) BOOL shouldObserveShareHidden;
@property (nonatomic) BOOL canClickIconImage;
@property (retain, nonatomic) AWEDetailHeaderActivityModel *activityModel;
@property (retain, nonatomic) AWEDetailActivityLinkModel *activityLinkModel;
@property (retain, nonatomic) AWEAweMVTemplateModel *templateModel;
@property (retain, nonatomic) AWEDetailMVMaterialSlotsModel *templateInfoModel;
@property (nonatomic) BOOL isPicTemplate;
@property (nonatomic) BOOL isAIGCSticker;
@property (nonatomic) BOOL isAIGCLora;
@property (nonatomic) BOOL isAIGCMultiLora;
@property (nonatomic) BOOL isFromUlike;
@property (nonatomic) BOOL isTextOnImage;
@property (nonatomic) BOOL isCaptionFollowShot;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *effectID;
@property (copy, nonatomic) NSString *templateID;
@property (nonatomic) BOOL bottomIsAwemeList;
@property (copy, nonatomic) NSString *multiLoraPersonRangeText;
@property (nonatomic) BOOL isAutoCaptionTemplate;
@property (nonatomic) BOOL showLeftButton;
@property (copy, nonatomic) NSString *leftBtnText;
@property (copy, nonatomic) NSString *leftBtnSchema;
@property (retain, nonatomic) AWECodeGenUrlModel *leftIconURLModel;
@property (nonatomic) BOOL leftBtnIsLora;
@property (retain, nonatomic) ACCAIGCLoraPersonInfo *loraInfo;
@property (nonatomic) BOOL shouldShowAIGCKeywords;
@property (copy, nonatomic) NSString *aigcKeywordsContent;
@property (nonatomic) unsigned long long aigcKeywordsType;
@property (nonatomic) BOOL shouldShowEditAIGCKeywords;
@property (nonatomic) BOOL isDynamicMusicBeatsTemplate;

- (void).cxx_destruct;

@end
