@class BDCloudLinkKit, BDByteCastLogManager, BDByteCastMonitorManager, BDByteCastKit, BDByteCastConfigurationManager;

@interface BDByteCastContext : NSObject

@property (weak, nonatomic) BDByteCastKit *kit;
@property (retain, nonatomic) BDByteCastConfigurationManager *config;
@property (retain, nonatomic) BDByteCastLogManager *logger;
@property (retain, nonatomic) BDByteCastMonitorManager *monitor;
@property (retain, nonatomic) BDCloudLinkKit *cloudLinkKit;

+ (id)contextWithId:(id)a0;

- (id)initWithContextId:(id)a0;
- (void).cxx_destruct;

@end
