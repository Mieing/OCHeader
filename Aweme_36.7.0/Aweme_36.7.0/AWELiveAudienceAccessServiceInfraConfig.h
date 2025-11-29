@class NSString, NSDictionary;

@interface AWELiveAudienceAccessServiceInfraConfig : NSObject

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) NSDictionary *contextParams;
@property (retain, nonatomic) NSDictionary *clickParams;
@property (retain, nonatomic) NSDictionary *firstShowParams;
@property (nonatomic) BOOL enableMultiSegue;
@property (retain, nonatomic) NSDictionary *roomQueryParams;
@property (copy, nonatomic) NSString *distributionScene;
@property (copy, nonatomic) NSString *sourceBtmToken;

- (void).cxx_destruct;

@end
