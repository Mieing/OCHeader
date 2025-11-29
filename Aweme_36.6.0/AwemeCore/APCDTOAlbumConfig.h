@class NSString;

@interface APCDTOAlbumConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL enableMultiSelect;
@property (nonatomic) BOOL enableSwitchMultiSelect;
@property (nonatomic) BOOL enablePreview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)init;

@end
