@class NSMutableArray;

@interface GetInteractGiftPoolResponse_Data : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *giftPoolArray;
@property (readonly, nonatomic) unsigned long long giftPoolArray_Count;

+ (id)descriptor;

@end
