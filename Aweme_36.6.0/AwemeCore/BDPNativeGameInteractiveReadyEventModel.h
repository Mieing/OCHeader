@class NSDictionary, BDPUniqueID;

@interface BDPNativeGameInteractiveReadyEventModel : NSObject

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (nonatomic) unsigned long long eventTime;
@property (nonatomic) unsigned long long occurTime;
@property (retain, nonatomic) NSDictionary *extraParams;

- (void)processWithTriggerTime:(unsigned long long)a0 eventTime:(unsigned long long)a1 extraParams:(id)a2;
- (void).cxx_destruct;
- (id)initWithUniqueID:(id)a0;

@end
