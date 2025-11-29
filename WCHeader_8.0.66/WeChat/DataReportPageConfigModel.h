@class NSString;

@interface DataReportPageConfigModel : NSObject

@property (nonatomic) unsigned long long pageId;
@property (nonatomic) unsigned long long bizGroupId;
@property (retain, nonatomic) NSString *pageName;
@property (nonatomic) unsigned long long reportPolicy;
@property (nonatomic) unsigned long long routeRule;

- (id)toString;
- (void).cxx_destruct;

@end
