@class NSMutableArray, NSMutableDictionary;

@interface AWEPublishFirstFrameTracker : NSObject

@property (retain, nonatomic) NSMutableArray *eventArray;
@property (retain, nonatomic) NSMutableDictionary *eventBeginDictionary;
@property (retain, nonatomic) NSMutableDictionary *eventEndDictionary;

+ (id)sharedTracker;

- (void)eventBegin:(id)a0;
- (void)eventEnd:(id)a0;
- (void)addPublishFirstFrameNewEvent:(id)a0;
- (unsigned long long)dateFormatWithCAMediaTime:(double)a0;
- (void)finishTrack:(id)a0;
- (void).cxx_destruct;
- (void)clear;
- (id)init;

@end
