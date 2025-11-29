@class NSString, AWEURLModel;

@interface AWECommerceStickerModel : AWEBaseApiModel

@property (nonatomic) long long stickerID;
@property (retain, nonatomic) AWEURLModel *iconURLModel;
@property (copy, nonatomic) NSString *letters;
@property (copy, nonatomic) NSString *openURL;
@property (copy, nonatomic) NSString *webURL;
@property (copy, nonatomic) NSString *webURLTitle;

+ (id)iconURLModelTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
