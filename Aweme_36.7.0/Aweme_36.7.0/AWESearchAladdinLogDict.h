@class NSString;

@interface AWESearchAladdinLogDict : AWEBaseApiModel

@property (retain, nonatomic) NSString *aladdinSource;
@property (nonatomic) long long docId;
@property (retain, nonatomic) NSString *subTokenType;
@property (retain, nonatomic) NSString *secondTokenType;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
