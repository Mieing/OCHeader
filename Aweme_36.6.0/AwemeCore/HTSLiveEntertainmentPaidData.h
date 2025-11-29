@class HTSLiveItemContentInfo, NSMutableArray, NSString;

@interface HTSLiveEntertainmentPaidData : IESLivePBBaseMessage

@property (nonatomic) int rightType;
@property (nonatomic) int businessType;
@property (retain, nonatomic) NSMutableArray *productInfoListArray;
@property (readonly, nonatomic) unsigned long long productInfoListArray_Count;
@property (retain, nonatomic) NSMutableArray *itemInfoListArray;
@property (readonly, nonatomic) unsigned long long itemInfoListArray_Count;
@property (retain, nonatomic) HTSLiveItemContentInfo *currentItemInfo;
@property (nonatomic) BOOL hasCurrentItemInfo;
@property (nonatomic) int paymentOrderType;
@property (nonatomic) int purchaseFromSourceType;
@property (copy, nonatomic) NSString *orderId;
@property (copy, nonatomic) NSString *paidExtraData;

+ (id)descriptor;

@end
