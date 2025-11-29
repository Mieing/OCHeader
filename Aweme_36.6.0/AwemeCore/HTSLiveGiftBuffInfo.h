@class HTSLiveBuffLockInfo, NSString, GPBInt32Int64Dictionary, HTSLiveImage, HTSLiveDiyGiftCardButton, GPBInt32ObjectDictionary;

@interface HTSLiveGiftBuffInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *textColor;
@property (retain, nonatomic) HTSLiveImage *bgImg;
@property (nonatomic) BOOL hasBgImg;
@property (retain, nonatomic) HTSLiveImage *sweepLightImg;
@property (nonatomic) BOOL hasSweepLightImg;
@property (retain, nonatomic) HTSLiveImage *buffGiftDescribeImg;
@property (nonatomic) BOOL hasBuffGiftDescribeImg;
@property (nonatomic) long long buffGiftId;
@property (nonatomic) int buffLevel;
@property (nonatomic) BOOL buffCanSend;
@property (nonatomic) long long buffDiamondCount;
@property (copy, nonatomic) NSString *lockToast;
@property (nonatomic) long long defaultChoseAction;
@property (nonatomic) long long startTime;
@property (retain, nonatomic) HTSLiveBuffLockInfo *buffLockInfo;
@property (nonatomic) BOOL hasBuffLockInfo;
@property (retain, nonatomic) HTSLiveImage *bgImgV2;
@property (nonatomic) BOOL hasBgImgV2;
@property (retain, nonatomic) GPBInt32Int64Dictionary *tabChoseAction;
@property (readonly, nonatomic) unsigned long long tabChoseAction_Count;
@property (retain, nonatomic) HTSLiveImage *labelIcon;
@property (nonatomic) BOOL hasLabelIcon;
@property (retain, nonatomic) HTSLiveDiyGiftCardButton *diyGiftCardButton;
@property (nonatomic) BOOL hasDiyGiftCardButton;
@property (nonatomic) BOOL defaultExpand;
@property (retain, nonatomic) HTSLiveImage *giftIconAssetImg;
@property (nonatomic) BOOL hasGiftIconAssetImg;
@property (retain, nonatomic) GPBInt32ObjectDictionary *defaultGiftText;
@property (readonly, nonatomic) unsigned long long defaultGiftText_Count;

+ (id)descriptor;

@end
