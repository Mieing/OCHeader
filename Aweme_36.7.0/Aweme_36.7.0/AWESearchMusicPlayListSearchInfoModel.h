@class NSString;

@interface AWESearchMusicPlayListSearchInfoModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *playListId;
@property (copy, nonatomic) NSString *pageSchema;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
