@class NSString, OMJMaterialInfo, NSURL;

@interface MJShootVisageInspectorItem : NSObject

@property (readonly, nonatomic) OMJMaterialInfo *material;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSURL *iconURL;

+ (id)createEmptyItemWithMaterialScene:(unsigned long long)a0;

- (id)initWithMaterial:(id)a0;
- (BOOL)isEmptyItem;
- (void).cxx_destruct;

@end
