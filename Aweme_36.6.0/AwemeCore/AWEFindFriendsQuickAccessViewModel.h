@class NSArray, AWEFindFriendsQuickAccessContext, NSDictionary;

@interface AWEFindFriendsQuickAccessViewModel : NSObject

@property (retain, nonatomic) NSArray *models;
@property (retain, nonatomic) AWEFindFriendsQuickAccessContext *context;
@property (retain, nonatomic) NSDictionary *channels;

- (void)p_setupChannels;
- (void)p_setupModels;
- (id)p_verticalConfig;
- (id)p_horizontalConfig;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)selectModel:(id)a0;

@end
