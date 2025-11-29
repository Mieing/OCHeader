@class NSArray;
@protocol AWEPublishCreateModelParamProvider;

@interface AWEPublishCreateModelParamProviderInfo : NSObject

@property (retain, nonatomic) id<AWEPublishCreateModelParamProvider> provider;
@property (retain, nonatomic) NSArray *allKeys;

- (void).cxx_destruct;

@end
