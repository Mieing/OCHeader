@class NSString, AWENewsAISmartLoadTimeModel, NSMutableDictionary, NSArray;

@interface AWENewsAISmartFeedPageContext : NSObject

@property (retain, nonatomic) AWENewsAISmartLoadTimeModel *loadTimeModel;
@property (nonatomic) long long requireCount;
@property (copy, nonatomic) NSString *interestCategory;
@property (nonatomic) long long currentTabType;
@property (retain, nonatomic) NSMutableDictionary *logExtraDict;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSArray *forceIDList;
@property (copy, nonatomic) NSString *trackConfig;
@property (nonatomic) BOOL containerHasRedirect;

- (void).cxx_destruct;

@end
