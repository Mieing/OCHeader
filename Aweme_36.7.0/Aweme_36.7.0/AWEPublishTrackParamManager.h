@class NSArray;

@interface AWEPublishTrackParamManager : NSObject

@property (copy, nonatomic) NSArray *providers;

+ (id)providerClass;

- (void)setupProviders;
- (void).cxx_destruct;
- (id)init;

@end
