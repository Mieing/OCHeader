@class NSMutableArray;

@interface DDanmakuDataPool : NSObject

@property (retain, nonatomic) NSMutableArray *danmakusArray;
@property (nonatomic) unsigned long long traveledDanmakuIndex;

- (void)resetTravledDanmakuIndex;
- (id)initWithDanmakus:(id)a0;
- (void)appendDanmakus:(id)a0;
- (void)clearDanmakus;
- (id)allDanmakus;
- (id)danmakusBeforeTime:(double)a0;
- (id)firstDanmakusAfterTimeAccordCurrentIndex:(double)a0;
- (void).cxx_destruct;

@end
