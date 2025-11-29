@interface IESLivePlaybackCornerToastConfig : NSObject

@property (nonatomic) unsigned long long priority;

- (BOOL)higherThanOtherConfig:(id)a0;
- (BOOL)lowerThanOtherConfig:(id)a0;
- (BOOL)equalToOtherConfig:(id)a0;
- (id)init;

@end
