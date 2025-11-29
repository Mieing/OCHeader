@class NSString, AWEAwemeModel;

@interface AWERecycledWorksPrivatePostModel : NSObject <AWERecycledWorksPrivatePostModelProtocol>

@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (retain, nonatomic) NSString *schema;
@property (nonatomic) long long totalCount;
@property (nonatomic) BOOL needRefresh;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAweme:(id)a0;
- (id)coverImageURLs;
- (id)schemaForDetailPage;
- (void)trackClickEntrance;
- (void).cxx_destruct;
- (id)name;

@end
