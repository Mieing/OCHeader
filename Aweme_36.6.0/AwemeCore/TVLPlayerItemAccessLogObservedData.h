@class NSMutableString, NSMutableArray, NSDate;

@interface TVLPlayerItemAccessLogObservedData : NSObject <NSCopying>

@property (readonly, nonatomic) long long timestamp;
@property (nonatomic) long long playedSizeInBytes;
@property (nonatomic) long long playPosition;
@property (retain, nonatomic) NSMutableArray *stallEvents;
@property (retain, nonatomic) NSMutableArray *renderStallEvents;
@property (retain, nonatomic) NSMutableArray *avOutSyncEvents;
@property (readonly, nonatomic) long long durationOfStalls;
@property (readonly, nonatomic) long long durationOfStallsInPreview;
@property (readonly, nonatomic) long long stallCountInPreview;
@property (retain, nonatomic) NSDate *startPreviewDate;
@property (nonatomic) long long playTimePreview;
@property (readonly, nonatomic) long long playSpeedChangeCount;
@property (readonly, nonatomic) NSMutableString *playSpeedChangeInfo;

- (void)appendAVOutSyncEvent:(id)a0;
- (void)recordPlaySpeedChange:(float)a0;
- (void)handlePreview:(BOOL)a0;
- (id)avOutSyncInfo;
- (long long)getPlayPreviewTime;
- (id)renderStallInfo;
- (void)setReadOnlyVariable:(long long)a0 playSppedChangeCount:(long long)a1 playSpeedChangeInfo:(id)a2;
- (void)endPreview;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
