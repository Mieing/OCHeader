@class NSString, NSDictionary, AWEAwemeModel;

@interface AWERepostManagerClickConfig : NSObject

@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (retain, nonatomic) AWEAwemeModel *fromAweme;
@property (copy, nonatomic) NSString *pageType;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSDictionary *extraLogDict;

- (void).cxx_destruct;

@end
