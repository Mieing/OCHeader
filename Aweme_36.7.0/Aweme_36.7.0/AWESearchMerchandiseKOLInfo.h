@class NSString, AWEURLModel;

@interface AWESearchMerchandiseKOLInfo : AWEBaseApiModel

@property (retain, nonatomic) AWEURLModel *avatar;
@property (retain, nonatomic) NSString *recommendText;

+ (id)avatarJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
