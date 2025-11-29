@class NSMutableArray;

@interface TIMXTriggerCounterTPW : NSObject

@property (retain, nonatomic) NSMutableArray *tpss;
@property (nonatomic) long long count;
@property (readonly, nonatomic) long long windowsWidth;

- (id)initWithWindowsWidth:(long long)a0;
- (void)enqueueTPS:(id)a0;
- (void).cxx_destruct;
- (void)refresh;

@end
