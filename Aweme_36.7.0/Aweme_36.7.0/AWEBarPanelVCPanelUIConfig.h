@class UIImage, NSString;

@interface AWEBarPanelVCPanelUIConfig : NSObject

@property (retain, nonatomic) UIImage *panelIcon;
@property (copy, nonatomic) NSString *panelTitle;
@property (retain, nonatomic) NSString *cellClassName;
@property (nonatomic) double cellHeight;

+ (id)defaultWatchLaterConfig;

- (void).cxx_destruct;

@end
