@class NSArray, NSMutableDictionary;

@interface CJPayClickTracker : NSObject

@property (copy, nonatomic) NSArray *allEventList;
@property (retain, nonatomic) NSMutableDictionary *trackDict;
@property (nonatomic) BOOL isNeedUpdateEventList;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } mutexLock;

- (id)p_tryGetCustomDescWithResponder:(id)a0;
- (id)p_tryGeClassDescWithResponder:(id)a0;
- (id)p_buildModelWithPoint:(struct CGPoint { double x0; double x1; })a0 fromView:(id)a1 hitView:(id)a2;
- (void)p_markTimeInterval:(double)a0 clickModel:(id)a1;
- (id)p_descWithView:(id)a0;
- (double)p_handleTimeInterval:(double)a0;
- (id)getAllClickEventList;
- (void)receiveHitTestWithTargetView:(id)a0 fromView:(id)a1 point:(struct CGPoint { double x0; double x1; })a2 event:(id)a3;
- (void)cleanAllTrackerEvent;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
