@class NSString, NSArray;

@interface IESLiveToolbarSlotConfig : NSObject

@property (nonatomic) unsigned long long maxSlotCount;
@property (copy, nonatomic) NSString *fileName;
@property (copy, nonatomic) NSString *slotFileName;
@property (copy, nonatomic) NSArray *slots;

+ (id)instanceWithFileName:(id)a0;

- (id)slotsFilterWith:(id)a0;
- (id)slotForName:(id)a0;
- (id)removeLowPrioritySlotIfNeed:(id)a0 withTrackParam:(id)a1;
- (id)slotForItem:(id)a0;
- (id)slotNameArray;
- (void)matchConstruct;
- (void)constructWithFile:(id)a0;
- (id)dictForJsonFile:(id)a0;
- (void).cxx_destruct;
- (id)initWithFileName:(id)a0;

@end
