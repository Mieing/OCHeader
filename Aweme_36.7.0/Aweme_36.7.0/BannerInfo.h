@class NSString, TextWithBg, HTSLiveImage, NSMutableArray;

@interface BannerInfo : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *titleArray;
@property (readonly, nonatomic) unsigned long long titleArray_Count;
@property (retain, nonatomic) HTSLiveImage *bg;
@property (nonatomic) BOOL hasBg;
@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;
@property (retain, nonatomic) TextWithBg *statusInfo;
@property (nonatomic) BOOL hasStatusInfo;
@property (retain, nonatomic) TextWithBg *desc;
@property (nonatomic) BOOL hasDesc;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *extra;

+ (id)descriptor;

@end
