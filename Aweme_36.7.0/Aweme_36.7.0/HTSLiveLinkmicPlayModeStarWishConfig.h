@class NSString, GPBEnumArray;

@interface HTSLiveLinkmicPlayModeStarWishConfig : IESLivePBBaseMessage

@property (retain, nonatomic) GPBEnumArray *effectScenesArray;
@property (readonly, nonatomic) unsigned long long effectScenesArray_Count;
@property (nonatomic) BOOL globalValid;
@property (nonatomic) long long allowListId;
@property (copy, nonatomic) NSString *startPlayModeBgImg;
@property (copy, nonatomic) NSString *honorRanklistBgImg;
@property (copy, nonatomic) NSString *bannerBgImg;
@property (copy, nonatomic) NSString *playModeDetailImg;
@property (copy, nonatomic) NSString *bannerBgImgAudience;

+ (id)descriptor;

@end
