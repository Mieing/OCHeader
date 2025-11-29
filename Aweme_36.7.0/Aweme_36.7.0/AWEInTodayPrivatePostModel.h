@class PHAsset, NSString;

@interface AWEInTodayPrivatePostModel : NSObject <AWEInTodayPrivatePostModelProtocol>

@property (retain, nonatomic) PHAsset *localAsset;
@property (copy, nonatomic) NSString *requestLocalIdentifier;
@property (nonatomic) BOOL hasAggregateAuthority;
@property (readonly, copy, nonatomic) NSString *coverId;
@property (readonly, nonatomic) unsigned long long coverType;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) BOOL needRefresh;
@property (copy, nonatomic) NSString *customDisplayName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)checkEnableTransferToSchema:(id)a0;
- (id)initWithCoverId:(id)a0 coverType:(unsigned long long)a1;
- (void)setCoverImageWithModel:(id)a0 InCoverImageView:(id)a1;
- (id)schemaForInTodayDetailPage;
- (void)configCoverImageWithModel:(id)a0 coverImage:(id)a1;
- (void)requestCoverImageWithPHAsset:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)name;

@end
