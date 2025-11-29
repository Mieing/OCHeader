@class NSMutableArray, HTSLiveNewCarouselInfo;

@interface HTSLiveNewHighlightContainerSyncData : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *highlightItemsArray;
@property (readonly, nonatomic) unsigned long long highlightItemsArray_Count;
@property (nonatomic) long long syncVersion;
@property (retain, nonatomic) HTSLiveNewCarouselInfo *carouselInfo;
@property (nonatomic) BOOL hasCarouselInfo;

+ (id)descriptor;

@end
