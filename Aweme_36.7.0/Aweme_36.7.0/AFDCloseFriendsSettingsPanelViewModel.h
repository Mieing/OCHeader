@interface AFDCloseFriendsSettingsPanelViewModel : NSObject

@property (nonatomic) long long maxCloseFriendsCount;
@property (nonatomic) BOOL hasShownWidgetGuide;
@property (nonatomic) BOOL showWidgetGuide;

- (void)refreshShowWidgetGuide:(long long)a0;
- (void)fetchData;

@end
