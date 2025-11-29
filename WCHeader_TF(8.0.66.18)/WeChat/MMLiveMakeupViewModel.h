@class NSArray, MMLiveTaskId;
@protocol MMLiveMakeupViewModelObserver, MMLiveBeautyLogicProvider;

@interface MMLiveMakeupViewModel : NSObject

@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (retain, nonatomic) id<MMLiveBeautyLogicProvider> beautyLogicProvider;
@property (weak, nonatomic) NSArray *makeupEffectItems;
@property (weak, nonatomic) id<MMLiveMakeupViewModelObserver> observer;
@property (nonatomic) unsigned long long currentUsedItemIndex;

- (id)initWithTaskId:(id)a0;
- (void)setDetailValueDefault;
- (void)updateMakeup:(id)a0;
- (void)saveMakeupValues;
- (void)updateMakupDetail:(id)a0;
- (void)saveMakeupDetailValues;
- (id)getLiveTask;
- (id)beautyLogic;
- (id)currentItem;
- (void).cxx_destruct;

@end
