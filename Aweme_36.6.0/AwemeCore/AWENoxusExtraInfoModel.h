@class NSString;

@interface AWENoxusExtraInfoModel : AWEBaseApiModel

@property (nonatomic) BOOL popUp;
@property (nonatomic) BOOL isCollected;
@property (copy, nonatomic) NSString *titleBefore;
@property (copy, nonatomic) NSString *titleAfter;
@property (copy, nonatomic) NSString *watermarkUrl;
@property (nonatomic) BOOL skipAd;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
