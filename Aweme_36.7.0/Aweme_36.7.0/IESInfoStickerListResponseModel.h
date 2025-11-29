@class NSArray, NSString;

@interface IESInfoStickerListResponseModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *stickerList;
@property (retain, nonatomic) NSArray *collectionStickerList;
@property (retain, nonatomic) NSArray *categoryList;
@property (readonly, copy, nonatomic) NSString *version;
@property (readonly, copy, nonatomic) NSString *panelName;
@property (readonly, copy, nonatomic) NSString *frontInfoStickerID;
@property (readonly, copy, nonatomic) NSString *rearInfoStickerID;
@property (readonly, copy, nonatomic) NSArray *urlPrefix;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (void)preProcessEffects;
- (void).cxx_destruct;

@end
