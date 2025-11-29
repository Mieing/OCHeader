@class CJPayTimer, NSString;

@interface CJPayTimerView : CJPayButton <CJPayTimerProtocol>

@property (retain, nonatomic) CJPayTimer *timer;
@property (nonatomic) int curCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
