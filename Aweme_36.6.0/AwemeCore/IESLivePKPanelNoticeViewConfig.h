@class NSString;

@interface IESLivePKPanelNoticeViewConfig : NSObject

@property (nonatomic) unsigned long long style;
@property (nonatomic) BOOL hasTipsIcon;
@property (nonatomic) BOOL hasCloseButton;
@property (nonatomic) BOOL hasTransferButton;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *transferButtonText;
@property (copy, nonatomic) id /* block */ transferAction;
@property (copy, nonatomic) id /* block */ closeAction;

- (void).cxx_destruct;

@end
