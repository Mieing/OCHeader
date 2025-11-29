@class NSArray, NSString;

@interface IESInfoStickerCategoryModel : MTLModel <MTLJSONSerializing>

@property (copy) NSArray *infoStickerList;
@property (copy) NSArray *infoStickerIDs;
@property (readonly, copy, nonatomic) NSString *categoryID;
@property (readonly, copy, nonatomic) NSString *categoryKey;
@property (readonly, copy, nonatomic) NSString *categoryName;
@property (readonly, copy, nonatomic) NSString *iconDownloadURI;
@property (readonly, copy, nonatomic) NSArray *iconDownloadURLs;
@property (readonly, copy, nonatomic) NSString *iconSelectedURI;
@property (readonly, copy, nonatomic) NSArray *iconSelectedURLs;
@property (readonly, copy, nonatomic) NSArray *tags;
@property (readonly, copy, nonatomic) NSString *tagsUpdatedTime;
@property (readonly, nonatomic) BOOL isDefault;
@property (readonly, copy, nonatomic) NSString *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)fillStickersWithStickersMap:(id)a0;
- (void)replaceWithStickers:(id)a0;
- (void).cxx_destruct;

@end
