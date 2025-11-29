@protocol IESVideoBSNetworkDelegate;

@interface IESVideoBSSettingManager : NSObject

@property (weak, nonatomic) id<IESVideoBSNetworkDelegate> delegate;

+ (id)sharedInstance;

- (void)configSettingsWithModel:(id)a0;
- (void)requestSettingWithURLString:(id)a0;
- (void).cxx_destruct;

@end
