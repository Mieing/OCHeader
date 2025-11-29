@class IESGCPPBRankListAdditionalModel, NSString, IESGCPPBGameImageBundler, IESGCPPBGameImage, IESGCPPBGameDetailOfficialAccountInfo, NSMutableArray, IESGCPPBVideoRankListEntrance;

@interface IESGCPPBGameDetailCommonGameInfo : GPBMessage

@property (copy, nonatomic) NSString *id_p;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *onlineTime;
@property (copy, nonatomic) NSString *icon;
@property (retain, nonatomic) NSMutableArray *tagsArray;
@property (readonly, nonatomic) unsigned long long tagsArray_Count;
@property (copy, nonatomic) NSString *ageLimit;
@property (copy, nonatomic) NSString *introduction;
@property (nonatomic) long long gameUnionType;
@property (nonatomic) long long gameStage;
@property (nonatomic) long long gameAccessType;
@property (nonatomic) long long gamePlatform;
@property (copy, nonatomic) NSString *company;
@property (copy, nonatomic) NSString *publisher;
@property (copy, nonatomic) NSString *androidVersion;
@property (copy, nonatomic) NSString *androidPackageSize;
@property (copy, nonatomic) NSString *androidPackageName;
@property (copy, nonatomic) NSString *androidAuthorizationURL;
@property (copy, nonatomic) NSString *androidPrivacyURL;
@property (retain, nonatomic) IESGCPPBGameImageBundler *gameIcon;
@property (nonatomic) BOOL hasGameIcon;
@property (copy, nonatomic) NSString *shortAdditionalDesc;
@property (nonatomic) BOOL showSafeTag;
@property (copy, nonatomic) NSString *gameStatusIcon;
@property (nonatomic) int gameStatusInt;
@property (retain, nonatomic) IESGCPPBGameImage *gameStatusImg;
@property (nonatomic) BOOL hasGameStatusImg;
@property (copy, nonatomic) NSString *iosVersion;
@property (copy, nonatomic) NSString *iosPackageSize;
@property (retain, nonatomic) IESGCPPBGameImage *gameStatusImgWhite;
@property (nonatomic) BOOL hasGameStatusImgWhite;
@property (copy, nonatomic) NSString *supportLanguages;
@property (nonatomic) int participationType;
@property (copy, nonatomic) NSString *gameRequirementText;
@property (copy, nonatomic) NSString *dlcExpendPkgText;
@property (retain, nonatomic) NSMutableArray *additionalDescListArray;
@property (readonly, nonatomic) unsigned long long additionalDescListArray_Count;
@property (nonatomic) long long gamePlatformV2;
@property (copy, nonatomic) NSString *icpRegistration;
@property (retain, nonatomic) IESGCPPBGameImageBundler *welfareTitleImg;
@property (nonatomic) BOOL hasWelfareTitleImg;
@property (retain, nonatomic) IESGCPPBGameDetailOfficialAccountInfo *officialAccountInfo;
@property (nonatomic) BOOL hasOfficialAccountInfo;
@property (nonatomic) int omniCooperationType;
@property (nonatomic) long long publishStage;
@property (retain, nonatomic) NSMutableArray *additionalDescriptionListArray;
@property (readonly, nonatomic) unsigned long long additionalDescriptionListArray_Count;
@property (retain, nonatomic) IESGCPPBVideoRankListEntrance *videoRankListEntrance;
@property (nonatomic) BOOL hasVideoRankListEntrance;
@property (retain, nonatomic) IESGCPPBRankListAdditionalModel *gameRankListEntrance;
@property (nonatomic) BOOL hasGameRankListEntrance;
@property (copy, nonatomic) NSString *icpFilingEntityName;

+ (id)descriptor;

@end
