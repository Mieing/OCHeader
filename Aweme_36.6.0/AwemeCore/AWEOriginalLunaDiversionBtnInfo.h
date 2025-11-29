@class NSString;

@interface AWEOriginalLunaDiversionBtnInfo : AWEBaseApiModel

@property (copy, nonatomic) NSString *btnKey;
@property (copy, nonatomic) NSString *btnValue;
@property (copy, nonatomic) NSString *btnSchema;
@property (readonly, nonatomic) BOOL isAlbumSell;
@property (readonly, nonatomic) BOOL isDiversion;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
