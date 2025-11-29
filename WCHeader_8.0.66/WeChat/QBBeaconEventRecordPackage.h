@class NSArray, NSString;

@interface QBBeaconEventRecordPackage : NSObject <QBBeaconAnaNSObjTransToJceBufferProtocol>

@property (retain, nonatomic) NSArray *list;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createWUPModel;
- (id)getPkgElements;
- (void)addPkgElements:(id)a0;
- (id)getDataToBuffer;
- (void)dealloc;
- (void).cxx_destruct;

@end
