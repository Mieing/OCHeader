@class NSString, NSNumber;

@interface AWEVSNoticeDetailModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *vsSchemaUrl;
@property (retain, nonatomic) NSNumber *vs;
@property (retain, nonatomic) NSNumber *episodeId;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
