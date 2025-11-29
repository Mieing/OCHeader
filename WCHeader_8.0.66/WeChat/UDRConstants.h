@class NSString, NSMutableArray;

@interface UDRConstants : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSMutableArray *kUDRBizMetaArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)dealloc;
- (id)getClsNameArray;
- (void).cxx_destruct;

@end
