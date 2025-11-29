@class NSArray, NativeDramaEpisodeRanges;

@interface WCFinderNativeDramaDetailRangeSectionModel : NSObject

@property (retain, nonatomic) NSArray *ranges;
@property (retain, nonatomic) NativeDramaEpisodeRanges *selectedRange;
@property (nonatomic) unsigned long long selectedEpisodeID;
@property (nonatomic) unsigned long long nativeDramaID;

- (void).cxx_destruct;

@end
