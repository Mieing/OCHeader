@class NSString, NSDictionary, AWESearchUGCTopicTabSelectCellController;
@protocol AWEUGCTopicServiceProviderProtocol;

@interface AWESearchUGCPageContext : NSObject

@property (weak, nonatomic) id<AWEUGCTopicServiceProviderProtocol> serviceProvider;
@property (nonatomic) BOOL publishOptimize;
@property (readonly, copy, nonatomic) NSString *serviceUID;
@property (nonatomic) BOOL fromUGCHashTagPage;
@property (copy, nonatomic) NSString *hashTagId;
@property (copy, nonatomic) NSString *hashTagName;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *fromGroupId;
@property (copy, nonatomic) NSDictionary *ugcLogParams;
@property (copy, nonatomic) NSString *searchID;
@property (nonatomic) BOOL isFromUgcHashtagBank;
@property (nonatomic) BOOL hasShowCommentPanel;
@property (nonatomic) BOOL publishOptimizeDisableDoubleColumn;
@property (weak, nonatomic) AWESearchUGCTopicTabSelectCellController *ugcTabController;
@property (nonatomic) BOOL isUgcHashtagModuleItem;

- (id)topicService;
- (void).cxx_destruct;
- (id)initWithUID:(id)a0;

@end
