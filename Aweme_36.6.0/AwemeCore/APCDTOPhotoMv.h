@class NSString, NSArray;

@interface APCDTOPhotoMv : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *mvResId;
@property (copy, nonatomic) NSArray *imageList;
@property (nonatomic) BOOL canUseHighQuality;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
