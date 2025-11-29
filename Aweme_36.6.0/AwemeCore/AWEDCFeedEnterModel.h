@class NSString, NSDictionary, AWEAwemeModel;

@interface AWEDCFeedEnterModel : NSObject

@property (copy, nonatomic) NSString *enterMethod;
@property (nonatomic) long long enterType;
@property (copy, nonatomic) NSString *previousPage;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) NSDictionary *extraDict;
@property (copy, nonatomic) NSString *groupId;
@property (copy, nonatomic) NSString *authorId;

- (void).cxx_destruct;

@end
