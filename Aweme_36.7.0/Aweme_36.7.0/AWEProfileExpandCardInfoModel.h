@class AWEProfileCardEntriesInfoV3Model, NSString, AWEProfileExtensionAreaCardModel;

@interface AWEProfileExpandCardInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEProfileCardEntriesInfoV3Model *cardEntriesInfo;
@property (retain, nonatomic) AWEProfileCardEntriesInfoV3Model *serviceWidget;
@property (retain, nonatomic) AWEProfileExtensionAreaCardModel *showMoreCard;
@property (nonatomic) BOOL forbidEdit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cardEntriesInfoJSONTransformer;
+ (id)serviceWidgetJSONTransformer;
+ (id)showMoreCardJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
