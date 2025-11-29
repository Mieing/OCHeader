@class UIColor;

@interface AWEIMGroupJoinPanelItemViewModel : NSObject

@property (retain, nonatomic) Class associateViewClass;
@property (nonatomic) unsigned long long itemType;
@property (retain, nonatomic) UIColor *itemBgColor;
@property (nonatomic) double itemHeight;

- (void).cxx_destruct;
- (id)init;

@end
