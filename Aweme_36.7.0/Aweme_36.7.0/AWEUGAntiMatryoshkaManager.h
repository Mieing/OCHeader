@class AWEUGAntiMatryoshkaConfigModel;

@interface AWEUGAntiMatryoshkaManager : NSObject

@property (retain, nonatomic) AWEUGAntiMatryoshkaConfigModel *configModel;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)init;

@end
