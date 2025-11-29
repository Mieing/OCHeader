@class GPBInt64Array;

@interface IESLiveAioLinkObserveGiftEffectEventRequest : IESLivePBBaseMessage

@property (retain, nonatomic) GPBInt64Array *giftIdsArray;
@property (readonly, nonatomic) unsigned long long giftIdsArray_Count;

+ (id)descriptor;

@end
