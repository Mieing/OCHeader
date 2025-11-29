@class NSArray;

@interface AWEStudioPublishInternalModel : NSObject <NSCopying>

@property (nonatomic) long long sharePlatform;
@property (retain, nonatomic) NSArray *clipSourceAssetModelArray;
@property (copy, nonatomic) id /* block */ publishInternalCompletion;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
