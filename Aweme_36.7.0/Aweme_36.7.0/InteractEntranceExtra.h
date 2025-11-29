@class OpenGameSubscribeInfo, NSString, GameEngineInfo, LiveGuideInfo, HTSLiveImage, UnityVersionInfo, NSMutableArray;

@interface InteractEntranceExtra : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *exclusiveGiftsArray;
@property (readonly, nonatomic) unsigned long long exclusiveGiftsArray_Count;
@property (retain, nonatomic) NSMutableArray *packGiftsArray;
@property (readonly, nonatomic) unsigned long long packGiftsArray_Count;
@property (retain, nonatomic) OpenGameSubscribeInfo *subscribeInfo;
@property (nonatomic) BOOL hasSubscribeInfo;
@property (retain, nonatomic) UnityVersionInfo *unityVersionInfo;
@property (nonatomic) BOOL hasUnityVersionInfo;
@property (nonatomic) long long gameId;
@property (nonatomic) long long businessType;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSString *textIntro;
@property (copy, nonatomic) NSString *developer;
@property (copy, nonatomic) NSString *anchorRatioV2;
@property (copy, nonatomic) NSString *appCategory;
@property (retain, nonatomic) GameEngineInfo *gameEngineInfo;
@property (nonatomic) BOOL hasGameEngineInfo;
@property (retain, nonatomic) LiveGuideInfo *liveGuideInfo;
@property (nonatomic) BOOL hasLiveGuideInfo;
@property (retain, nonatomic) NSMutableArray *sensitivityTipArray;
@property (readonly, nonatomic) unsigned long long sensitivityTipArray_Count;
@property (retain, nonatomic) NSMutableArray *mediaIntroArray;
@property (readonly, nonatomic) unsigned long long mediaIntroArray_Count;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;
@property (copy, nonatomic) NSString *titleLabel;
@property (retain, nonatomic) NSMutableArray *tagInfoListArray;
@property (readonly, nonatomic) unsigned long long tagInfoListArray_Count;

+ (id)descriptor;

@end
