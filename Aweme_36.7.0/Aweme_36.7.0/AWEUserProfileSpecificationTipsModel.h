@class NSArray, NSString, NSDictionary;

@interface AWEUserProfileSpecificationTipsModel : AWEBaseApiModel

@property (nonatomic) long long pushTime;
@property (retain, nonatomic) NSArray *tips;
@property (copy, nonatomic) NSString *exitLogString;
@property (retain, nonatomic) NSDictionary *exitLog;
@property (readonly, nonatomic) BOOL hasUserExited;

+ (id)tipsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
