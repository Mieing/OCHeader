@class NSMutableArray;

@interface IESECSliceXAnimatableLayerChangesGlobalListener : NSObject

@property (retain, nonatomic) NSMutableArray *activeListeners;
@property (readonly, nonatomic) BOOL isActive;

+ (id)animatableProperties;
+ (void)initialize;
+ (id)shared;

- (id)init_private;
- (void)saveLayerState:(id)a0;
- (void)beginWithElementView:(id)a0;
- (void).cxx_destruct;
- (id)finish;

@end
