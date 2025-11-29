@class NSString, AWECodeGenActivityAlbumMediaTagModel;

@interface AWECodeGenInterestActivityInnerVideoExtraInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *itemId;
@property (retain, nonatomic) AWECodeGenActivityAlbumMediaTagModel *leftTagModel;
@property (nonatomic) BOOL isTop;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
