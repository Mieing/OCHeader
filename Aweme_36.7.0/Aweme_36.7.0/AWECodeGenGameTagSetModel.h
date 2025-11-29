@class AWECodeGenGameTagInfoModel, AWECodeGenContentTypeTagInfoModel;

@interface AWECodeGenGameTagSetModel : AWEBaseDataModel

@property (nonatomic) BOOL isGame;
@property (retain, nonatomic) AWECodeGenGameTagInfoModel *gameNameTagModel;
@property (retain, nonatomic) AWECodeGenContentTypeTagInfoModel *contentTypeTagModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
