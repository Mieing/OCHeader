@class NSString, AWECodeGenUrlModel;

@interface AWECodeGenActivityAlbumCreatorInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *nickName;
@property (retain, nonatomic) AWECodeGenUrlModel *avatarModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
