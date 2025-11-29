@class NSString, NSArray;

@interface IESLiveChatChannelSettingPanelItem : NSObject

@property (copy, nonatomic) NSString *panelTitle;
@property (copy, nonatomic) NSString *panelSubtitle;
@property (nonatomic) unsigned long long itemType;
@property (retain, nonatomic) NSArray *sectionModels;

- (void).cxx_destruct;

@end
