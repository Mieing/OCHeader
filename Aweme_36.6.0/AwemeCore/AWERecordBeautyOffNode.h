@class NSMutableArray;
@protocol AWERecordBeautyNodeProtocol;

@interface AWERecordBeautyOffNode : AWERecordBeautyItemModel {
    id<AWERecordBeautyNodeProtocol> _parentNode;
    NSMutableArray *_childNodes;
}

- (BOOL)isEnableRecordBeautyAddStyleEffectSwitchStatus;
- (void).cxx_destruct;
- (id)iconImageName;
- (void)dealloc;
- (id)childNodes;
- (id)parentNode;
- (void)setParentNode:(id)a0;
- (void)addChildNode:(id)a0;
- (id)nodeName;
- (id)nodeId;
- (void)setChildNodes:(id)a0;

@end
