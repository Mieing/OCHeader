@class NSDictionary;

@interface MMAssetFetchError : NSObject

@property (nonatomic) long long code;
@property (retain, nonatomic) NSDictionary *errorInfo;

+ (id)defaultError;
+ (id)errorWithCode:(long long)a0;
+ (id)errorWithCode:(long long)a0 info:(id)a1;

- (void).cxx_destruct;

@end
