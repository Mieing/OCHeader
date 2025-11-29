@class NSIndexPath, NSMutableDictionary, NSDictionary, NSString, YataContainerItemModel, YataDataItemModel;
@protocol YataInstanceInnerInterface;

@interface YataRenderNode : YataAbstractNode <YataRenderNodeInterface, YataDataProvider> {
    NSString *_key;
}

@property (weak, nonatomic) id<YataInstanceInnerInterface> yataInstance;
@property (retain, nonatomic) NSDictionary *oldFields;
@property (retain, nonatomic) NSDictionary *oldGlobal;
@property (nonatomic) BOOL isUpScreen;
@property (retain, nonatomic) YataDataItemModel *data;
@property (retain, nonatomic) YataContainerItemModel *container;
@property (retain, nonatomic) NSDictionary *globalFields;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (retain, nonatomic) NSMutableDictionary *customFields;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *nodeKey;
@property (readonly, nonatomic) NSString *nodeName;
@property (readonly, nonatomic) NSDictionary *nodeFields;
@property (readonly, nonatomic) NSDictionary *global;
@property (readonly, nonatomic) unsigned long long protocolUpdateType;

- (id)getRenderKey;
- (id)getRenderNodeTag;
- (id)combineFields;
- (void)updateCustomFieldsWithKey:(id)a0 value:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })nodeFrame;
- (void)updateCustomFields:(id)a0;
- (void)updateSlot:(long long)a0;
- (BOOL)isDiffCompareEqual;
- (id)initWithKey:(id)a0 globalFields:(id)a1 yataInstance:(id)a2 container:(id)a3 data:(id)a4;
- (BOOL)isDataItemFieldsPassiveChanged;
- (id)copy;
- (id)feature;
- (id)key;
- (void).cxx_destruct;
- (id)fields;
- (void)setKey:(id)a0;
- (void)updateInfo:(id)a0;

@end
