@class NSMutableArray;

@interface MMFinderLiveKSKitLyricSegment : NSObject

@property (nonatomic) int startTime;
@property (nonatomic) int duration;
@property (retain, nonatomic) NSMutableArray *lyricWordList;
@property (readonly, nonatomic) int endTime;

+ (id)parseLyricSegment:(id)a0 sentence:(id)a1 wordBeginIndex:(unsigned long long)a2;
+ (id)parseLyricSentence:(id)a0;

- (id)init;
- (void)initDefaultDatas;
- (id)getLyricWordList;
- (void)addLyricWord:(id)a0;
- (unsigned long long)lyricWordsCnt;
- (void)removeLyricWords:(id)a0;
- (void).cxx_destruct;

@end
