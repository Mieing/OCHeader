@class NSString;

@interface IESLiveBigPartyOpenGuideSettingPanelCellConfig : NSObject

@property (nonatomic) long long category;
@property (nonatomic) long long row;
@property (nonatomic) Class classForCell;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) int settingKey;
@property (retain, nonatomic) id settingValue;
@property (copy, nonatomic) id /* block */ action;

- (void).cxx_destruct;

@end
