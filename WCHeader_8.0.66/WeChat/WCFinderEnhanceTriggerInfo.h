@class NSNumber, WCFinderDataItem, NSArray;

@interface WCFinderEnhanceTriggerInfo : NSObject

@property (nonatomic) int lastTriggerType;
@property (retain, nonatomic) NSNumber *lastTriggerEvent;
@property (retain, nonatomic) WCFinderDataItem *enhancedByThisItem;
@property (retain, nonatomic) NSArray *enhancingTidList;
@property (nonatomic) int enhanceType;

- (void).cxx_destruct;

@end
