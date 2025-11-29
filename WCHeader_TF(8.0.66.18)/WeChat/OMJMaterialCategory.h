@class NSString, NSArray;

@interface OMJMaterialCategory : NSObject

@property (nonatomic) struct SharedPtr<XMJMaterialCategory> { struct XMJMaterialCategory *_ptr; } backingCategory;
@property (readonly, nonatomic) unsigned long long scene;
@property (readonly, nonatomic) unsigned long long identifier;
@property (readonly, nonatomic) NSString *categoryName;
@property (readonly, nonatomic) NSString *previewImageURL;
@property (readonly, nonatomic) NSArray *materialInfos;

- (id)initWithScene:(unsigned long long)a0 identifier:(unsigned long long)a1 categoryName:(id)a2 previewImageURL:(id)a3 materialInfo:(id)a4;
- (id)initWithBackingCategory:(struct SharedPtr<XMJMaterialCategory> { struct XMJMaterialCategory *x0; })a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
