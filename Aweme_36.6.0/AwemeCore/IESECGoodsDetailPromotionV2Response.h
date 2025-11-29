@class IESECGoodsDetailSliceActionStorage, NSDictionary, IESECGoodsDetailNavBarModel, IESECGoodsDetailPageConfigure, IESECGoodsDetailPageLogicalControl, NSString, IESECGoodsDetailComponentObject, IESECGoodsDetailCommonPageMeta, IESECGoodsDetailBottomModel, IESECGoodsDetailHeaderModel, NSArray, IESECPdpQuestionnaireEntrance, IESECLLDCLynxManager;

@interface IESECGoodsDetailPromotionV2Response : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *componentList;
@property (retain, nonatomic) IESECGoodsDetailComponentObject *bottomButtonComponentObject;
@property (retain, nonatomic) IESECGoodsDetailComponentObject *smallVideoComponentObject;
@property (retain, nonatomic) IESECGoodsDetailComponentObject *shopFloatEntryComponentObject;
@property (retain, nonatomic) IESECGoodsDetailComponentObject *topBannerObject;
@property (retain, nonatomic) IESECGoodsDetailPageLogicalControl *logicalControl;
@property (retain, nonatomic) IESECGoodsDetailComponentObject *halfStrand;
@property (retain, nonatomic) IESECGoodsDetailPageConfigure *pageConfig;
@property (retain, nonatomic) NSArray *scrollTabNodes;
@property (retain, nonatomic) IESECGoodsDetailComponentObject *navigationComponentObject;
@property (retain, nonatomic) IESECGoodsDetailCommonPageMeta *commonPageMeta;
@property (retain, nonatomic) IESECGoodsDetailComponentObject *pendantInfo;
@property (retain, nonatomic) IESECGoodsDetailComponentObject *replayEntry;
@property (retain, nonatomic) IESECLLDCLynxManager *lynxManager;
@property (copy, nonatomic) NSDictionary *sliceTemplates;
@property (retain, nonatomic) IESECGoodsDetailHeaderModel *headerModel;
@property (copy, nonatomic) NSDictionary *actions;
@property (retain, nonatomic) IESECGoodsDetailNavBarModel *topNav;
@property (retain, nonatomic) IESECGoodsDetailBottomModel *bottom;
@property (retain, nonatomic) NSDictionary *gallery;
@property (retain, nonatomic) NSDictionary *headMoreVideo;
@property (retain, nonatomic) IESECGoodsDetailSliceActionStorage *actionStorage;
@property (retain, nonatomic) NSDictionary *globalData;
@property (retain, nonatomic) IESECPdpQuestionnaireEntrance *questionnaireEntrance;
@property (copy, nonatomic) NSArray *bottomLeftPendant;
@property (copy, nonatomic) NSArray *bottomRightPendant;
@property (copy, nonatomic) NSArray *topLeftPendant;
@property (copy, nonatomic) NSArray *topRightPendant;
@property (copy, nonatomic) NSDictionary *containerLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)componentListJSONTransformer;
+ (id)scrollTabNodesJSONTransformer;
+ (id)bottomLeftPendantJSONTransformer;
+ (id)bottomRightPendantJSONTransformer;
+ (id)topLeftPendantJSONTransformer;
+ (id)topRightPendantJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)hasSlcNavBar;
- (BOOL)hasSlcBottom;
- (void).cxx_destruct;

@end
