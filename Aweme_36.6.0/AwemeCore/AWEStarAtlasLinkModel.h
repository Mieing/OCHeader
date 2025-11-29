@class NSString;

@interface AWEStarAtlasLinkModel : AWEAdLinkModel <AWECommentListHeaderViewExtraInfoProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *linkID;
@property (copy, nonatomic) NSString *downloadURL;
@property (copy, nonatomic) NSString *complianceData;

+ (id)JSONKeyPathsByPropertyKey;

- (id)iconImageURLs;
- (id)extraTitle;
- (id)couponDescription;
- (void)loadExtraDescriptionWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)componentSeparator;
- (id)iconImageName;

@end
