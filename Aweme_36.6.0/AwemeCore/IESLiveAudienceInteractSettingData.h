@class NSString, NSArray;

@interface IESLiveAudienceInteractSettingData : NSObject

@property (copy, nonatomic) NSString *categoryName;
@property (copy, nonatomic) NSArray *sceneConfigurations;
@property (copy, nonatomic) NSArray *layoutConfigurations;
@property (copy, nonatomic) NSArray *playModeConfigurations;
@property (copy, nonatomic) NSArray *ktvStageModeConfigurations;
@property (copy, nonatomic) NSArray *settings;
@property (nonatomic) BOOL hasRedDot;
@property (nonatomic) BOOL hasMoreButton;
@property (copy, nonatomic) id /* block */ moreButtonDidClick;

- (void).cxx_destruct;

@end
