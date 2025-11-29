@class AWESearchMerchandisePicURLModel, AWESearchMerchandisePicSize;

@interface AWESearchMerchandisePicConfigure : AWEBaseApiModel

@property (retain, nonatomic) AWESearchMerchandisePicURLModel *picURL;
@property (retain, nonatomic) AWESearchMerchandisePicSize *size;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
