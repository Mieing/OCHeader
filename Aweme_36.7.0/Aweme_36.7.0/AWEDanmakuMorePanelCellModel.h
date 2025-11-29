@class UIImage, NSString, UIColor;

@interface AWEDanmakuMorePanelCellModel : NSObject

@property (retain, nonatomic) UIImage *icon;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long type;
@property (nonatomic) BOOL isOn;
@property (copy, nonatomic) id /* block */ switchStatusChangedBlock;
@property (copy, nonatomic) id /* block */ tapBlock;
@property (retain, nonatomic) UIColor *textColor;

- (void).cxx_destruct;

@end
