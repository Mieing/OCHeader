@class NSMutableArray, NSString, NSDictionary, YataProtocolModel, YataContainerItemModel, YataDataItemModel;

@interface YataNodeInfoData : NSObject

@property (copy, nonatomic) NSString *key;
@property (retain, nonatomic) YataDataItemModel *nodeData;
@property (retain, nonatomic) YataContainerItemModel *nodeContainer;
@property (retain, nonatomic) NSMutableArray *nodeChildrenKey;
@property (retain, nonatomic) YataProtocolModel *protocolData;
@property (retain, nonatomic) NSDictionary *globalData;

+ (BOOL)isDeprecatedChildren:(id)a0;
+ (id)distinctChildrenNode:(id)a0;
+ (id)buildNewChildrenKeys:(id)a0 childrenKeys:(id)a1 protocolData:(id)a2;

- (void)updateNodeInfo:(id)a0;
- (void)updateChildren:(id)a0;
- (id)initWithNodeKey:(id)a0 protocolData:(id)a1;
- (void)checkAndUpdateNodeInfo:(id)a0;
- (void).cxx_destruct;
- (void)clear;

@end
