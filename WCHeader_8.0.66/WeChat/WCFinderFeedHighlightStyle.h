@class NSMutableArray;

@interface WCFinderFeedHighlightStyle : NSObject

@property (retain, nonatomic) NSMutableArray *infoListInPB;
@property (retain, nonatomic) NSMutableArray *hightlightItemList;

- (id)initWithHighlightInfoList:(id)a0;
- (void)configHightlightItemListWithInfoList:(id)a0;
- (BOOL)isValid;
- (BOOL)isEqual:(id)a0;
- (id)generateHightlightProgressNumberListWithVideoDuration:(int)a0;
- (id)currentHightlightItemWithCurrentPlayPosition:(double)a0;
- (id)currentHightlightTitleWithCurrentPlayPosition:(double)a0;
- (long long)nearestHightlightItemIndexWithCurrentPlayPosition:(double)a0;
- (void).cxx_destruct;

@end
