@class NSDictionary, NSMutableDictionary, NSString;

@interface AWEDeliveryCellRegister : NSObject <AWEDeliveryCellRegisterProtocol>

@property (retain, nonatomic) NSMutableDictionary *cellModelsDictM;
@property (copy, nonatomic) NSDictionary *messageBodyTypeDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)modelClassWithBodyType:(long long)a0 message:(id)a1;
- (void)registerCellModelClass:(Class)a0 withMessageType:(long long)a1;
- (id)allCellModels;
- (void)registerAllCellModelClass;
- (void).cxx_destruct;

@end
