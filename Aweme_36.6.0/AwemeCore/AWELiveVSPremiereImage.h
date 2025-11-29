@class NSDictionary, NSString;

@interface AWELiveVSPremiereImage : AWEBaseApiModel

@property (retain, nonatomic) NSDictionary *previewImageUp;
@property (retain, nonatomic) NSDictionary *previewImageDown;
@property (nonatomic) long long previewType;
@property (retain, nonatomic) NSString *previewWordUp;
@property (retain, nonatomic) NSString *previewWordDown;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
