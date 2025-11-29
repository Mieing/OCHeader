@class NSArray, NSNumber;

@interface AWELiveVSPremierePlay : AWEBaseApiModel

@property (retain, nonatomic) NSArray *highlights;
@property (nonatomic) long long playType;
@property (retain, nonatomic) NSNumber *premiereStartTime;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
