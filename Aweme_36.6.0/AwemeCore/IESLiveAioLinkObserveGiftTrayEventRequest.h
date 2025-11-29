@class GPBInt64Array;

@interface IESLiveAioLinkObserveGiftTrayEventRequest : IESLivePBBaseMessage

@property (retain, nonatomic) GPBInt64Array *giftIdsArray;
@property (readonly, nonatomic) unsigned long long giftIdsArray_Count;

+ (id)descriptor;

@end
