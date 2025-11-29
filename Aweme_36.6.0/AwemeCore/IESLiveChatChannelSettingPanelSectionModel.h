@class NSString, NSArray;

@interface IESLiveChatChannelSettingPanelSectionModel : NSObject

@property (copy, nonatomic) NSString *sectionTitle;
@property (nonatomic) double headerSectionHeight;
@property (nonatomic) double footerSectionHeight;
@property (nonatomic) BOOL needSeperateLine;
@property (copy, nonatomic) NSArray *models;

- (void).cxx_destruct;

@end
