@class NSString, NSDictionary, NSArray;

@interface QBBeaconModuleStrategy : QBBeaconPersistObject

@property (retain, nonatomic) NSString *uploadUrl;
@property (nonatomic) int moduleKey;
@property (nonatomic) BOOL onOff;
@property (retain, nonatomic) NSDictionary *detail;
@property (retain, nonatomic) NSArray *preventEventCode;
@property (retain, nonatomic) NSArray *sampleEvent;

- (id)initWithWUPMSModel:(id)a0;
- (BOOL)isEventCanReport:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;

@end
