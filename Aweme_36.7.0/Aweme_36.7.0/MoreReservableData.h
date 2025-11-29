@class NSMutableArray;

@interface MoreReservableData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *moreReservableItemListArray;
@property (readonly, nonatomic) unsigned long long moreReservableItemListArray_Count;

+ (id)descriptor;

@end
