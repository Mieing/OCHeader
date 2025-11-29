@class NSString, NSDictionary, AWEMusicDiversionInfo, NSNumber, AWEMusicCommentTopBarInfo;

@interface AWEMusicExtraModel : AWEBaseApiModel <ACCMusicExtraModelProtocol>

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSNumber *albumId;
@property (retain, nonatomic) NSString *noStrengthBeatsURLString;
@property (retain, nonatomic) NSString *energyTraceURLString;
@property (retain, nonatomic) NSString *onsetCNNURLString;
@property (retain, nonatomic) NSString *veBeatsURLString;
@property (retain, nonatomic) NSString *downBeatsURLString;
@property (retain, nonatomic) NSString *imageBeatsURLStrig;
@property (nonatomic) BOOL hasEdited;
@property (retain, nonatomic) NSNumber *minVideoNumber;
@property (nonatomic) long long algorithmType;
@property (retain, nonatomic) NSString *manMadeBeatsURLString;
@property (nonatomic) BOOL fromReplacedMusicSimilar;
@property (copy, nonatomic) NSString *candidateClip;
@property (nonatomic) BOOL musicSpecificCopyright;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSNumber *albumId;
@property (copy, nonatomic) NSString *album;
@property (copy, nonatomic) NSString *albumTitle;
@property (retain, nonatomic) NSNumber *songId;
@property (copy, nonatomic) NSString *allRate;
@property (copy, nonatomic) NSString *author;
@property (copy, nonatomic) NSString *picSmall;
@property (copy, nonatomic) NSString *picPremium;
@property (copy, nonatomic) NSString *picBig;
@property (copy, nonatomic) NSString *picHuge;
@property (nonatomic) BOOL hasEdited;
@property (retain, nonatomic) NSNumber *appleMusicID;
@property (retain, nonatomic) NSString *topTagURLString;
@property (copy, nonatomic) NSString *highLevelFollowTag;
@property (retain, nonatomic) NSString *noStrengthBeatsURLString;
@property (retain, nonatomic) NSString *energyTraceURLString;
@property (retain, nonatomic) NSString *onsetCNNURLString;
@property (retain, nonatomic) NSString *veBeatsURLString;
@property (retain, nonatomic) NSString *downBeatsURLString;
@property (retain, nonatomic) NSString *imageBeatsURLStrig;
@property (retain, nonatomic) NSNumber *minVideoNumber;
@property (retain, nonatomic) NSNumber *maxVideoNumber;
@property (nonatomic) long long algorithmType;
@property (retain, nonatomic) NSString *manMadeBeatsURLString;
@property (retain, nonatomic) NSDictionary *jumpToLunaMv;
@property (retain, nonatomic) NSString *jaychouUrl;
@property (nonatomic) BOOL isAEDMusic;
@property (retain, nonatomic) NSNumber *AEDMusicScore;
@property (retain, nonatomic) NSNumber *AEDSingingScore;
@property (copy, nonatomic) NSString *candidateClip;
@property (retain, nonatomic) NSString *feedMusicTitleString;
@property (retain, nonatomic) AWEMusicCommentTopBarInfo *commentTopBarInfo;
@property (retain, nonatomic) AWEMusicDiversionInfo *diversionInfo;
@property (retain, nonatomic) NSDictionary *forwardingInfoDic;
@property (copy, nonatomic) NSString *lunaColorGradientInfo;
@property (nonatomic) BOOL fromReplacedMusicSimilar;
@property (nonatomic) BOOL musicSpecificCopyright;
@property (nonatomic) long long dspSwitch;
@property (nonatomic) long long isFromShootGuide;
@property (nonatomic) BOOL miniLuna;
@property (retain, nonatomic) NSString *loudness;
@property (retain, nonatomic) NSString *peak;
@property (copy, nonatomic) NSString *recExtra;
@property (nonatomic) BOOL isHighFollowUser;
@property (retain, nonatomic) NSDictionary *trackParams;

+ (id)commentTopBarInfoJSONTransformer;
+ (id)diversionInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
