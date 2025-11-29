@class NSString, NSArray;

@interface IESArtistStickerCheckupdateResponseModel : MTLModel <MTLJSONSerializing>

@property (readonly, nonatomic) BOOL panelUpdated;
@property (readonly, copy, nonatomic) NSString *latestVersion;
@property (readonly, nonatomic) NSArray *updateCategoryIds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
