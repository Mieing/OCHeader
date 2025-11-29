@class NSString, NSMutableArray, HTSLiveLinkmicInteractEntrance_BannerInfo;

@interface HTSLiveLinkmicInteractEntrance : IESLivePBBaseMessage

@property (nonatomic) int status;
@property (retain, nonatomic) NSMutableArray *buttonInfosArray;
@property (readonly, nonatomic) unsigned long long buttonInfosArray_Count;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long entranceId;
@property (copy, nonatomic) NSString *nameColor;
@property (retain, nonatomic) HTSLiveLinkmicInteractEntrance_BannerInfo *bannerInfo;
@property (nonatomic) BOOL hasBannerInfo;

+ (id)descriptor;

@end
