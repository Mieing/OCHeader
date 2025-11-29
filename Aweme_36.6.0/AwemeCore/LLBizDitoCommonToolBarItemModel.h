@class LLBizDitoCommonToolBarItemTextModel, NSString, NSDictionary, LLBizDitoCommonToolBarItemIconModel, NSNumber, LLDitoStyle;

@interface LLBizDitoCommonToolBarItemModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) LLBizDitoCommonToolBarItemIconModel *iconModel;
@property (retain, nonatomic) LLBizDitoCommonToolBarItemTextModel *textModel;
@property (retain, nonatomic) NSDictionary *style;
@property (copy, nonatomic) NSString *clickEvent;
@property (copy, nonatomic) NSNumber *width;
@property (copy, nonatomic) NSNumber *height;
@property (retain, nonatomic) LLDitoStyle *DitoStyleModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
