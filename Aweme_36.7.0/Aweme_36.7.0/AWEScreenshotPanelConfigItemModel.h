@class NSString;

@interface AWEScreenshotPanelConfigItemModel : NSObject

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL isSwitchButton;
@property (nonatomic) BOOL isSwitchOn;
@property (copy, nonatomic) id /* block */ switchButtonTapped;
@property (copy, nonatomic) id /* block */ refreshCellBlock;

- (void)refreshCell;
- (void).cxx_destruct;

@end
