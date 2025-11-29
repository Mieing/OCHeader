@class NSString, AWEIMImageResourceURLInfo;

@interface AWEIMMixedPhotoStyleInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *styleID;
@property (copy, nonatomic) NSString *backImageUrl;
@property (copy, nonatomic) NSString *coverImageUrl;
@property (copy, nonatomic) AWEIMImageResourceURLInfo *coverImagePreviewUrl;
@property (copy, nonatomic) NSString *templateType;
@property (copy, nonatomic) NSString *showTag;
@property (copy, nonatomic) NSString *jumpSchema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)coverImagePreviewUrlJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
