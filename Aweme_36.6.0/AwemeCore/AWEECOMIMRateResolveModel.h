@class NSString, NSArray;

@interface AWEECOMIMRateResolveModel : NSObject

@property (copy, nonatomic) NSString *resolveTitle;
@property (copy, nonatomic) NSString *commentKey;
@property (copy, nonatomic) NSArray *resolveTagList;
@property (nonatomic) long long maxCountForRow;

- (void).cxx_destruct;
- (id)initWithDict:(id)a0;

@end
