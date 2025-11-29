@class NSString;
@protocol AWEFeedConcernViewModelProtocol;

@interface AWEFeedConcernControllerContext : AWEPageContext <AWEFeedConcernControllerContextProtocol>

@property (retain, nonatomic) id<AWEFeedConcernViewModelProtocol> concernViewModel;
@property (nonatomic) BOOL isConcernRefreshing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
