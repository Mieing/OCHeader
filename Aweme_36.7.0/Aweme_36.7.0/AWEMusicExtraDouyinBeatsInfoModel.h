@class NSNumber, NSString;

@interface AWEMusicExtraDouyinBeatsInfoModel : AWEBaseDataModel

@property (retain, nonatomic) NSNumber *minVideoNumber;
@property (retain, nonatomic) NSNumber *maxVideoNumber;
@property (nonatomic) long long algorithmType;
@property (copy, nonatomic) NSString *manMadeBeatsURLString;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
