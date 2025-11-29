@class NSString, UIColor;

@interface BDPCustomMorePanelModel : NSObject

@property (nonatomic) BOOL hide;
@property (copy, nonatomic) NSString *normalTitle;
@property (copy, nonatomic) NSString *selectedTitle;
@property (copy, nonatomic) NSString *disableTitle;
@property (retain, nonatomic) UIColor *bgColor;
@property (retain, nonatomic) UIColor *normalTitleColor;
@property (retain, nonatomic) UIColor *selectedTitleColor;
@property (retain, nonatomic) UIColor *disableTitleColor;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (nonatomic) BOOL disable;
@property (nonatomic) double rightAnchorConstant;
@property (nonatomic) double leftAnchorConstant;
@property (copy, nonatomic) NSString *appIconUrl;
@property (copy, nonatomic) NSString *appName;

- (void).cxx_destruct;

@end
