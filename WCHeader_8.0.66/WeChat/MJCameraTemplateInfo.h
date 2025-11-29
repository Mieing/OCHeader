@class NSString;

@interface MJCameraTemplateInfo : NSObject <PBCoding, NSCopying>

@property (copy, nonatomic) NSString *resourcePackUrl;
@property (nonatomic) unsigned long long cameraPosition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_resourcePackUrl;
+ (void)PBArrayAdd_cameraPosition;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)initWithCameraTemplateInfo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
