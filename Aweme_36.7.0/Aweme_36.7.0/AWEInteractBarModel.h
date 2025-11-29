@class NSString, NSArray;

@interface AWEInteractBarModel : AWEBaseApiModel

@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *bizInfo;
@property (retain, nonatomic) NSArray *bars;
@property (nonatomic) long long currentBarStatus;
@property (nonatomic) BOOL recordWordAlreadyDisappear;

+ (id)barsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)checkInfoAvailable;
- (void).cxx_destruct;

@end
