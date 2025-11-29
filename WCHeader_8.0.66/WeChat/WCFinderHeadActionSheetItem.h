@class NSString, UIColor, WCFinderRedDotTipsShowInfo;

@interface WCFinderHeadActionSheetItem : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (retain, nonatomic) UIColor *subTitleColor;
@property (retain, nonatomic) WCFinderRedDotTipsShowInfo *showInfo;
@property (copy, nonatomic) NSString *cameraTemplateTitle;
@property (copy, nonatomic) id /* block */ clickBlock;

- (void).cxx_destruct;

@end
