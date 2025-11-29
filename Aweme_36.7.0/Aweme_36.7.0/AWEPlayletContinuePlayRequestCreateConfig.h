@class NSString, AWEAwemeModel;

@interface AWEPlayletContinuePlayRequestCreateConfig : NSObject

@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) long long configType;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *advertiseParam;
@property (copy, nonatomic) NSString *campaignAdParam;

- (void).cxx_destruct;

@end
