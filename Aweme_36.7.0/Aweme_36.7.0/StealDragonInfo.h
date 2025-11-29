@class NSString, StealDragonInfo_StealInfo, StealDragonInfo_SettleInfo, NSMutableArray;

@interface StealDragonInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *battleId;
@property (nonatomic) long long initDragonLevel;
@property (retain, nonatomic) NSMutableArray *periodListArray;
@property (readonly, nonatomic) unsigned long long periodListArray_Count;
@property (retain, nonatomic) StealDragonInfo_StealInfo *stealInfo;
@property (nonatomic) BOOL hasStealInfo;
@property (retain, nonatomic) StealDragonInfo_SettleInfo *settleInfo;
@property (nonatomic) BOOL hasSettleInfo;
@property (copy, nonatomic) NSString *uiResource;
@property (copy, nonatomic) NSString *lynxData;

+ (id)descriptor;

@end
