@class HTSLiveText, NSString, NSArray, HTSLiveImage, NSMutableDictionary, NSNumber;

@interface HTSLiveMemberMessageEffectConfigModel : IESLiveDynamicModel <IESLiveEffectNodeProtocol>

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *dressID;
@property (copy, nonatomic) NSString *borderDressID;
@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) long long avatarPos;
@property (retain, nonatomic) HTSLiveText *displayText;
@property (copy, nonatomic) NSString *textColor;
@property (copy, nonatomic) NSString *textContent;
@property (copy, nonatomic) NSString *backgourndColor;
@property (copy, nonatomic) NSString *fansName;
@property (retain, nonatomic) NSNumber *fansLevel;
@property (retain, nonatomic) HTSLiveImage *textIcon;
@property (nonatomic) BOOL hasTextIcon;
@property (nonatomic) BOOL isLight;
@property (nonatomic) int stayTime;
@property (nonatomic) long long animAssetID;
@property (retain, nonatomic) HTSLiveImage *badge;
@property (retain, nonatomic) NSArray *flexSettingArray;
@property (retain, nonatomic) HTSLiveImage *textIconOverlay;
@property (retain, nonatomic) NSArray *textFlexSettingArray;
@property (readonly, nonatomic) BOOL hasTextIconOverlay;
@property (retain, nonatomic) HTSLiveImage *animatedBadge;
@property (copy, nonatomic) NSString *downgradeBackgroundImage;
@property (readonly, nonatomic) BOOL hasAnimatedBadge;
@property (nonatomic) BOOL hasSweepLight;
@property (nonatomic) long long centerAnimAssetId;
@property (retain, nonatomic) HTSLiveImage *dynamicImage;
@property (nonatomic) long long mp4AnimAssetId;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long alignment;
@property (nonatomic) long long alignmentOffset;
@property (retain, nonatomic) NSMutableDictionary *pieceValues;
@property (retain, nonatomic) HTSLiveText *templateText;
@property (nonatomic) long long assetID;
@property (nonatomic) long long textAlignment;
@property (retain, nonatomic) HTSLiveImage *borderThumb;
@property (retain, nonatomic) HTSLiveImage *avatarThumb;
@property (nonatomic) BOOL userNameClips;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
