@class NSString, NSDictionary, NSArray;

@interface OMJMaterialInfo : NSObject

@property (nonatomic) struct SharedPtr<XMJMaterialInfo> { struct XMJMaterialInfo *_ptr; } backingInfo;
@property (readonly, nonatomic) unsigned long long scene;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long version;
@property (readonly, nonatomic) NSString *materialName;
@property (readonly, nonatomic) NSString *previewImageURL;
@property (readonly, nonatomic) NSString *displayImageGifURL;
@property (readonly, nonatomic) NSString *displayImageWxamURL;
@property (readonly, nonatomic) NSString *downloadURL;
@property (readonly, nonatomic) NSDictionary *extraInfo;
@property (readonly, nonatomic) NSArray *vocalFiltersParams;

- (id)initWithScene:(unsigned long long)a0 identifier:(id)a1 version:(long long)a2 materialName:(id)a3 previewImageURL:(id)a4 downloadURL:(id)a5 extraInfo:(id)a6;
- (id)initWithScene:(unsigned long long)a0 identifier:(id)a1 version:(long long)a2 materialName:(id)a3 previewImageURL:(id)a4 displayImageGifURL:(id)a5 displayImageWxamURL:(id)a6 downloadURL:(id)a7 extraInfo:(id)a8 vocalFiltersParams:(id)a9;
- (id)initWithBackingInfo:(struct SharedPtr<XMJMaterialInfo> { struct XMJMaterialInfo *x0; })a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
