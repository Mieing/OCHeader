@class NSNumber, NSString;

@interface AWELiveVSVideoInfo : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *duration;
@property (retain, nonatomic) NSString *videoJson;
@property (retain, nonatomic) NSString *vid;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
