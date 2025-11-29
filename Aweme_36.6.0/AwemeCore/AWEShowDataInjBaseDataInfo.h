@class NSString, NSDictionary;

@interface AWEShowDataInjBaseDataInfo : NSObject

@property (copy, nonatomic) NSString *sceneID;
@property (copy, nonatomic) NSString *businessID;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSDictionary *businessParams;

- (BOOL)isValidDataInjInfo;
- (id)generateTrackParamsWithSceneConfig:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
