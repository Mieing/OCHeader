@class NSString;

@interface AWEPOILynxInjectParamsModel : NSObject

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *localKey;
@property (nonatomic) long long type;
@property (copy, nonatomic) id staticValue;
@property (copy, nonatomic) id defaultValue;
@property (nonatomic) long long target;
@property (nonatomic) BOOL isForceRewrite;

- (void).cxx_destruct;

@end
