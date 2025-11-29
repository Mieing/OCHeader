@class NSString;

@interface AWEMusicLunaInfoModel : AWEBaseDataModel

@property (nonatomic) BOOL isLunaUser;
@property (nonatomic) BOOL isFavorite;
@property (nonatomic) BOOL hasCopyright;
@property (nonatomic) long long mappingSongIdNum;
@property (copy, nonatomic) NSString *mappingSongId;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
