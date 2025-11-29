@class AWECodeGenUrlModel;

@interface AWECodeGenActivityAlbumPhotoInfoModel : AWEBaseDataModel

@property (retain, nonatomic) AWECodeGenUrlModel *downloadModel;
@property (retain, nonatomic) AWECodeGenUrlModel *originModel;
@property (retain, nonatomic) AWECodeGenUrlModel *thumbModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
