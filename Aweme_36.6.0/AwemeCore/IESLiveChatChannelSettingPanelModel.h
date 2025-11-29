@class UIFont, NSString, UIColor, UIImage;

@interface IESLiveChatChannelSettingPanelModel : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) UIImage *icon;
@property (nonatomic) struct CGSize { double width; double height; } iconSize;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (nonatomic) BOOL isOn;
@property (copy, nonatomic) id /* block */ switchBlock;
@property (nonatomic) double progress;
@property (copy, nonatomic) id /* block */ sliderBlock;
@property (nonatomic) unsigned long long cellType;
@property (nonatomic) BOOL disable;
@property (copy, nonatomic) NSString *disableToast;

- (void).cxx_destruct;

@end
