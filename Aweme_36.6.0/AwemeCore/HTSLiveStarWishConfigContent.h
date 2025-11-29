@class GPBInt64Array, NSMutableArray, NSString;

@interface HTSLiveStarWishConfigContent : IESLivePBBaseMessage

@property (nonatomic) long long defaultTargetScore;
@property (retain, nonatomic) GPBInt64Array *targetScoreListArray;
@property (readonly, nonatomic) unsigned long long targetScoreListArray_Count;
@property (nonatomic) BOOL disableTargetScoreList;
@property (nonatomic) BOOL anchorInvolved;
@property (nonatomic) BOOL disableAnchorInvolved;
@property (nonatomic) BOOL onceOpened;
@property (nonatomic) BOOL isGiftOpen;
@property (retain, nonatomic) NSMutableArray *starGiftsArray;
@property (readonly, nonatomic) unsigned long long starGiftsArray_Count;
@property (copy, nonatomic) NSString *dressId;

+ (id)descriptor;

@end
