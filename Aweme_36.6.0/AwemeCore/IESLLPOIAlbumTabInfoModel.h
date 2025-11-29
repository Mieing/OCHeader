@class NSString;

@interface IESLLPOIAlbumTabInfoModel : IESLLifeBaseApiModel

@property (copy, nonatomic) NSString *tabName;
@property (copy, nonatomic) NSString *tabID;
@property (copy, nonatomic) NSString *totalCount;
@property (nonatomic) BOOL hasTrackShowEvent;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
