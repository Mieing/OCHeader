@class NSString, NSArray;

@interface AFDPublishVisibleListDataController : AWEListDataController <AFDPublishVisibleListDataControllerProtocol>

@property (copy, nonatomic) NSString *awemeID;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) BOOL dontNeedGroup;
@property (nonatomic) long long totalCount;
@property (copy, nonatomic) NSArray *visibleUserList;
@property (nonatomic) BOOL isStory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAwemeID:(id)a0 scene:(unsigned long long)a1 isStory:(BOOL)a2;
- (void)p_setupDataWithResponseModel:(id)a0;
- (id)initWithAwemeID:(id)a0 dontNeedGroup:(BOOL)a1 scene:(unsigned long long)a2 isStory:(BOOL)a3;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
