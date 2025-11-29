@class NSString, AWEPOIVideoDarenCardTextModel, AWEURLModel;

@interface AWEPOIVideoDarenCardModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long times;
@property (copy, nonatomic) NSString *cardType;
@property (retain, nonatomic) AWEPOIVideoDarenCardTextModel *iconTextModel;
@property (retain, nonatomic) AWEURLModel *icon;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) AWEPOIVideoDarenCardTextModel *buttonTextModel;
@property (copy, nonatomic) NSString *schema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconJSONTransformer;
+ (id)iconTextModelJSONTransformer;
+ (id)buttonTextModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
