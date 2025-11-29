@class NSString, OMJMaterialInfo, NSURL;

@interface MJShootBeautyMainPanelItem : NSObject

@property (readonly, nonatomic) OMJMaterialInfo *material;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSURL *iconURL;

+ (id)createEmptyItem;

- (id)initWithMaterial:(id)a0;
- (BOOL)isEmptyItem;
- (void).cxx_destruct;

@end
