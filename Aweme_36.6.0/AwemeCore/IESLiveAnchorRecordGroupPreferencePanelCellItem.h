@class NSString;

@interface IESLiveAnchorRecordGroupPreferencePanelCellItem : NSObject

@property (nonatomic) long long cellType;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic) BOOL switchOn;
@property (copy, nonatomic) id /* block */ switchDidToggle;
@property (copy, nonatomic) id /* block */ helpBtnClicked;

- (void).cxx_destruct;

@end
