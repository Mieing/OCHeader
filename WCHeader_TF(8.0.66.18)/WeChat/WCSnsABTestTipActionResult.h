@interface WCSnsABTestTipActionResult : NSObject

@property (nonatomic) int tipViewType;
@property (nonatomic) unsigned long long buttonCount;
@property (nonatomic) unsigned long long buttonClickedIndex;
@property (nonatomic) int buttonActionType;

- (id)init;
- (id)genStatInfo;

@end
