@class NSString, NSMutableArray;
@protocol AWERecordBeautyNodeProtocol;

@interface AWERecordBeautyRootNode : NSObject <AWERecordBeautyNodeProtocol>

@property (weak, nonatomic) id<AWERecordBeautyNodeProtocol> parentNode;
@property (retain, nonatomic) NSMutableArray *childNodes;
@property (retain, nonatomic) NSMutableArray *childExtraNodes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addChildExtraNodes:(id)a0;
- (void)removeAllChildNodes;
- (void)removeAllChildExtraNodes;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)addChildNode:(id)a0;
- (id)nodeName;
- (id)nodeId;

@end
