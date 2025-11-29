@class NSMutableArray;

@interface MMFinderLiveKSKitLyricSentence : NSObject

@property (nonatomic) int startTime;
@property (nonatomic) int duration;
@property (retain, nonatomic) NSMutableArray *lyricSegmentList;
@property (nonatomic) BOOL isSegCanSplit;
@property (nonatomic) unsigned long long initSegmentsCnt;
@property (nonatomic) unsigned long long initWordsCnt;
@property (readonly, nonatomic) int endTime;

+ (id)parseLyricSentence:(id)a0;

- (id)init;
- (void)initDefaultDatas;
- (void)addLyricSegment:(id)a0;
- (id)getLyricSegmentList;
- (void)removeLyricSegments:(id)a0;
- (unsigned long long)getCurrLyricWordsCnt;
- (void)updateInitSegmentsAndWordsCnt;
- (id)description;
- (void).cxx_destruct;

@end
