@class NSString, AWEHomePageRemoteCommonImageModel;

@interface AWEHomePageRemoteCommonCardDataModel : AWEHomePageRemoteItemDataModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subTitle;
@property (retain, nonatomic) AWEHomePageRemoteCommonImageModel *imageModel;
@property (retain, nonatomic) AWEHomePageRemoteCommonImageModel *iconModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconModelJSONTransformer;
+ (id)imageModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isModelValid;

@end
