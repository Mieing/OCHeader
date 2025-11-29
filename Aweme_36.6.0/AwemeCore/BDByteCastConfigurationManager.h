@class BDByteCastConfiguration;

@interface BDByteCastConfigurationManager : NSObject

@property (retain, nonatomic) BDByteCastConfiguration *configuration;
@property (nonatomic) BOOL dlnaCacheEnabled;
@property (nonatomic) BOOL bdlinkBleEnabled;
@property (nonatomic) BOOL bdlinkEnableQuickQuery;

+ (BOOL)isToB;

- (id)initWithContextId:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)localDeviceInfo;

@end
