@class NSString, HTSLiveImage, HTSLiveGiftMarketingBtn, NSMutableArray, GPBInt64Array;

@interface HTSLiveGiftMarketingInfo : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;
@property (retain, nonatomic) NSMutableArray *mainTitleArray;
@property (readonly, nonatomic) unsigned long long mainTitleArray_Count;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *subTitleSchema;
@property (nonatomic) int leftCount;
@property (retain, nonatomic) HTSLiveGiftMarketingBtn *giftMarketingButton;
@property (nonatomic) BOOL hasGiftMarketingButton;
@property (nonatomic) int buffMergeType;
@property (copy, nonatomic) NSString *marketingType;
@property (retain, nonatomic) HTSLiveImage *mainTitleImg;
@property (nonatomic) BOOL hasMainTitleImg;
@property (retain, nonatomic) HTSLiveImage *jumpIcon;
@property (nonatomic) BOOL hasJumpIcon;
@property (copy, nonatomic) NSString *mainTitleAfterMission;
@property (copy, nonatomic) NSString *subMarketingType;
@property (retain, nonatomic) GPBInt64Array *relatedGiftIdsArray;
@property (readonly, nonatomic) unsigned long long relatedGiftIdsArray_Count;

+ (id)descriptor;

@end
