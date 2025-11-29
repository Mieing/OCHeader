@class NSData, NSMutableDictionary, WCFinderBulletCache;

@interface WCMegaBulletCacheModel : NSObject

@property (nonatomic, getter=isError) BOOL error;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) NSMutableDictionary *tasks;
@property (retain, nonatomic) NSMutableDictionary *existedTag;
@property (retain, nonatomic) WCFinderBulletCache *cache;
@property (readonly, nonatomic) double nextTime;
@property (readonly, nonatomic) BOOL hadMore;

+ (double)preLoadDuration;

- (id)init;
- (BOOL)shouldRequestInPosition:(double)a0;
- (void)tagExistFrom:(double)a0 to:(double)a1 videoLength:(double)a2;
- (BOOL)rangExistInTimeLine:(double)a0;
- (void)clear;
- (void).cxx_destruct;

@end
