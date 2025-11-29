@class AWEAwemeModel, NSString, AWESearchTeenAlbumDisplayCardModel;

@interface AWESearchTeenAlbumCardModel : AWEBaseApiModel

@property (retain, nonatomic) AWESearchTeenAlbumDisplayCardModel *albumInfo;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) NSString *kyItemID;
@property (copy, nonatomic) NSString *sourceType;
@property (copy, nonatomic) NSString *tip;

+ (id)albumInfoJSONTransformer;
+ (id)awemeModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
