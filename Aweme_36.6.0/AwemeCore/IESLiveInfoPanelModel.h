@class UIImage, NSString;

@interface IESLiveInfoPanelModel : NSObject

@property (retain, nonatomic) UIImage *image;
@property (nonatomic) unsigned long long style;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *detail;
@property (copy, nonatomic) NSString *contentText;
@property (copy, nonatomic) id /* block */ contentAction;
@property (copy, nonatomic) NSString *buttonName;
@property (copy, nonatomic) id /* block */ buttonAction;
@property (nonatomic) BOOL closeAfterConfirm;
@property (nonatomic) BOOL hideCloseButton;
@property (nonatomic) BOOL executeButtonActionAfterClose;

- (void).cxx_destruct;

@end
