@class NSNumber, MMFinderLiveTaskId;

@interface MMFinderLiveShopSettingAskForPromotingAdapter : NSObject

@property (retain, nonatomic) NSNumber *valueUpdating;
@property (retain, nonatomic) MMFinderLiveTaskId *taskID;
@property (readonly, nonatomic) BOOL value;
@property (readonly, nonatomic) BOOL displayValue;

- (id)initWithTaskID:(id)a0;
- (void)updateValue:(BOOL)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
