@class NSString, AWEHomePageRemoteCommonImageModel;

@interface AWEHomePageRemoteCommonRadioButtonDataModel : AWEHomePageRemoteItemDataModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *schema;
@property (retain, nonatomic) NSString *tabID;
@property (retain, nonatomic) AWEHomePageRemoteCommonImageModel *imageModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imageModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isModelValid;

@end
