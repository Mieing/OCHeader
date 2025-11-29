@class NSMutableDictionary;

@interface AWEEcomSearchMerchandisePatchChunkManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *supportCardChunkDict;
@property (retain, nonatomic) NSMutableDictionary *costDict;
@property (retain, nonatomic) NSMutableDictionary *startTimeDict;

+ (id)patchCardName:(unsigned long long)a0;
+ (id)patchCardType:(id)a0;
+ (id)sharedInstance;

- (BOOL)isSupport:(id)a0;
- (BOOL)isFromCardChunk:(id)a0;
- (void)startStatisticTime:(id)a0;
- (void)endStatisticTime:(id)a0;
- (id)costTrackParams;
- (void).cxx_destruct;
- (id)init;

@end
