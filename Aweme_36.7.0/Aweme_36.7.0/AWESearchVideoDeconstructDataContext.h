@class NSString, NSDictionary, NSArray;

@interface AWESearchVideoDeconstructDataContext : NSObject

@property (copy, nonatomic) NSString *coverImageURL;
@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSString *initialSearchSource;
@property (copy, nonatomic) NSString *searchChannel;
@property (copy, nonatomic) NSDictionary *bbox;
@property (copy, nonatomic) NSString *imageUrl;
@property (copy, nonatomic) NSString *reason;
@property (copy, nonatomic) NSString *reasonExplain;
@property (copy, nonatomic) NSString *entity;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *enterFromSecond;
@property (copy, nonatomic) NSString *fromGroupID;
@property (copy, nonatomic) NSString *fromAuthorID;
@property (copy, nonatomic) NSString *refer;
@property (copy, nonatomic) NSString *currentGsType;
@property (copy, nonatomic) NSString *currentPage;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSArray *gsEntities;
@property (nonatomic) long long initialSelectedIndex;

- (void).cxx_destruct;

@end
