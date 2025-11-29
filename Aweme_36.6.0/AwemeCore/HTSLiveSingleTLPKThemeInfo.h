@class NSString, HTSLiveImage, NSMutableArray;

@interface HTSLiveSingleTLPKThemeInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *pkTheme;
@property (nonatomic) long long giftId;
@property (retain, nonatomic) HTSLiveImage *giftIcon;
@property (nonatomic) BOOL hasGiftIcon;
@property (copy, nonatomic) NSString *giftName;
@property (nonatomic) long long pkScore;
@property (nonatomic) long long pkThemeEnum;
@property (retain, nonatomic) NSMutableArray *contributorInfoArray;
@property (readonly, nonatomic) unsigned long long contributorInfoArray_Count;
@property (retain, nonatomic) NSMutableArray *giftGroupSendInfoArray;
@property (readonly, nonatomic) unsigned long long giftGroupSendInfoArray_Count;
@property (retain, nonatomic) NSMutableArray *bigRichInfoArray;
@property (readonly, nonatomic) unsigned long long bigRichInfoArray_Count;

+ (id)descriptor;

@end
