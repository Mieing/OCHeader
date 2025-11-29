@class NSString, NSArray, AWENewFaceStickerModel;

@interface AWEMusicDetailInspirationPropBodyModel : AWEBaseApiModel

@property (retain, nonatomic) NSString *propID;
@property (retain, nonatomic) AWENewFaceStickerModel *propInfo;
@property (retain, nonatomic) NSArray *awemeList;
@property (retain, nonatomic) NSString *nextCursor;
@property (nonatomic) BOOL hasMore;

+ (id)awemeListJSONTransformer;
+ (id)propInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
