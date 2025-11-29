@class NSMutableArray, HTSLiveImage;

@interface BattleLinkerInviteMessageExtra_AcceptTip : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *contentArray;
@property (readonly, nonatomic) unsigned long long contentArray_Count;
@property (retain, nonatomic) HTSLiveImage *bgImg;
@property (nonatomic) BOOL hasBgImg;

+ (id)descriptor;

@end
