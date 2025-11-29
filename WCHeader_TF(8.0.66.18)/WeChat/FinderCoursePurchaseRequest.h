@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderCoursePurchaseRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *posterFinderUsername;
@property (nonatomic) unsigned long long courseId;
@property (retain, nonatomic) NSString *sourceFeedId;
@property (nonatomic) unsigned int commentScene;

+ (void)initialize;

@end
