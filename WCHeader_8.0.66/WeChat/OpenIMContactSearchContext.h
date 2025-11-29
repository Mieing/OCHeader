@class NSString;

@interface OpenIMContactSearchContext : NSObject

@property (nonatomic) unsigned long long wxaScene;
@property (copy, nonatomic) NSString *wxaAppId;
@property (copy, nonatomic) NSString *searchContext;
@property (nonatomic) unsigned int searchScene;
@property (nonatomic) unsigned int adScene;
@property (nonatomic) unsigned long long adId;
@property (copy, nonatomic) NSString *host;

+ (unsigned int)serachSubSceneFromUserName:(id)a0;

- (void).cxx_destruct;

@end
