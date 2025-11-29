@class NSString;

@interface WCPayHalfPageSheetConfig : NSObject

@property (nonatomic) unsigned int iconType;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *tipsContent;
@property (retain, nonatomic) NSString *leftButtonTitle;
@property (copy, nonatomic) id /* block */ onLeftButtonClick;
@property (retain, nonatomic) NSString *rightButtonTitle;
@property (copy, nonatomic) id /* block */ onRightButtonClick;

- (void).cxx_destruct;

@end
