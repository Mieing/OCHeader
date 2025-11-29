@class NSString, NSMapTable;
@protocol AWERecordBeautyNodeProtocol;

@interface AWERecordBeautySourceDataBizModel : NSObject <CKScorageBizModel>

@property (retain, nonatomic) id<AWERecordBeautyNodeProtocol> rootNode;
@property (retain, nonatomic) NSMapTable *nodeFlatDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRootNode:(id)a0;
- (BOOL)isEnableRecordBeautyAddStyleEffectSwitchStatus;
- (void)p_fillNodeFlatDictWithRootNode:(id)a0;
- (void)fillNodeFlatDictWithNewRootNode:(id)a0;
- (void).cxx_destruct;

@end
