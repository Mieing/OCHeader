@class WCFinderDataItem, NSIndexPath;

@interface WCFinderLiveCompleteElementModel : NSObject

@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (retain, nonatomic) NSIndexPath *indexPath;

+ (id)finderLiveStreamElementModelFrom:(id)a0 indexPath:(id)a1;

- (unsigned long long)getExposeStartTs;
- (void)setExposeStartTs:(unsigned long long)a0;
- (unsigned long long)getExposeValidRatioFirstStartTs;
- (void)setExposeValidRatioFirstStartTs:(unsigned long long)a0;
- (unsigned long long)getExposeValidRatioStartTs;
- (void)setExposeValidRatioStartTs:(unsigned long long)a0;
- (unsigned int)getExposeValidRatioTime;
- (void)setExposeValidRatioTime:(unsigned int)a0;
- (unsigned long long)getAutoPlayStartTs;
- (void)setAutoPlayStartTs:(unsigned long long)a0;
- (unsigned int)getAutoPlayTime;
- (void)setAutoPlayTime:(unsigned int)a0;
- (void)resetExposeSession;
- (void).cxx_destruct;

@end
