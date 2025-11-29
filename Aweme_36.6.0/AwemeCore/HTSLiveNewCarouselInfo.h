@class GPBInt64Array;

@interface HTSLiveNewCarouselInfo : IESLivePBBaseMessage

@property (nonatomic) long long time;
@property (retain, nonatomic) GPBInt64Array *itemGroupArray;
@property (readonly, nonatomic) unsigned long long itemGroupArray_Count;

+ (id)descriptor;

@end
