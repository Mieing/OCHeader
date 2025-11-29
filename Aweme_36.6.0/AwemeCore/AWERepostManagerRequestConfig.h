@class NSString, NSDictionary, AWEAwemeModel;

@interface AWERepostManagerRequestConfig : NSObject

@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (retain, nonatomic) AWEAwemeModel *fromAweme;
@property (copy, nonatomic) NSString *pageType;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (nonatomic) BOOL isSuccess;
@property (nonatomic) BOOL isEmptyRepost;
@property (copy, nonatomic) NSDictionary *extraLogDict;

- (void).cxx_destruct;

@end
