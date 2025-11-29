@class NSString;

@interface AWEGDAlbumTabInfoModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *tabName;
@property (copy, nonatomic) NSString *tabID;
@property (copy, nonatomic) NSString *totalCount;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
