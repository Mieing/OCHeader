@class AWESearchMerchandisePicUrl, NSString, AWESearchMerchandisePicSize;

@interface AWESearchMerchandisePicConfig : AWEBaseApiModel

@property (retain, nonatomic) AWESearchMerchandisePicUrl *picUrl;
@property (retain, nonatomic) AWESearchMerchandisePicSize *size;
@property (copy, nonatomic) NSString *url;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
