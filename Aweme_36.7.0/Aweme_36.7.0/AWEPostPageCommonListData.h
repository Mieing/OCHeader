@class NSString;
@protocol AWEPostPageAnchorService, AWEPostPageMatchMissionService, AWEPostPageContext;

@interface AWEPostPageCommonListData : NSObject <AWEPostPageListDataTemplate>

@property (weak, nonatomic) id<AWEPostPageAnchorService> anchorService;
@property (weak, nonatomic) id<AWEPostPageMatchMissionService> matchMission;
@property (weak, nonatomic) id<AWEPostPageContext> context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindServices:(id)a0;
- (void)configSection:(id)a0 atIndex:(long long)a1;
- (void).cxx_destruct;
- (id)listData;
- (id)anchorArray;

@end
