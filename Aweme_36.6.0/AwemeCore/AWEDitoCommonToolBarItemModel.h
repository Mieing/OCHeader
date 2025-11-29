@class AWEDitoCommonToolBarItemIconModel, AWEDitoCommonToolBarItemTextModel, NSDictionary, NSString, DitoStyle, NSNumber;

@interface AWEDitoCommonToolBarItemModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) AWEDitoCommonToolBarItemIconModel *iconModel;
@property (retain, nonatomic) AWEDitoCommonToolBarItemTextModel *textModel;
@property (retain, nonatomic) NSDictionary *style;
@property (copy, nonatomic) NSString *clickEvent;
@property (copy, nonatomic) NSNumber *width;
@property (copy, nonatomic) NSNumber *height;
@property (retain, nonatomic) DitoStyle *DitoStyleModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
