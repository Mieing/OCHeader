@class NSArray, AACWeakTimer;

@interface CHHapticDynamicParameterModel : NSObject

@property (retain, nonatomic) AACWeakTimer *dynamicTtimer;
@property (copy, nonatomic) NSArray *parameters;
@property (nonatomic) float time;

- (void)startTimer:(id)a0 :(id)a1;
- (void)sendParameter:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;

@end
