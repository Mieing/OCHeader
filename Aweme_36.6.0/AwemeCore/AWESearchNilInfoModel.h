@class NSString, NSNumber;

@interface AWESearchNilInfoModel : AWEBaseApiModel

@property (retain, nonatomic) NSString *searchNilItem;
@property (copy, nonatomic) NSString *searchNilType;
@property (retain, nonatomic) NSNumber *textType;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
