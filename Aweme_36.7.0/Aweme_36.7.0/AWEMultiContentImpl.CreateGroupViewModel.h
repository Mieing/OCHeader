@class AWEAwemeModel;

@interface AWEMultiContentImpl.CreateGroupViewModel : NSObject <AFDNonVideoCardViewModelProtocol>

@property (nonatomic, retain) AWEAwemeModel *awemeModel;

- (void)configWithAwemeModel:(id)a0;
- (BOOL)shouldContainVideoPlayer;
- (BOOL)enableLongPress;
- (void).cxx_destruct;
- (id)init;

@end
