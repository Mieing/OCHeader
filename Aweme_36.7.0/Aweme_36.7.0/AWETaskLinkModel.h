@class NSString;

@interface AWETaskLinkModel : AWEAdLinkModel <AWECommentListHeaderViewExtraInfoProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *ID;
@property (copy, nonatomic) NSString *subtitle;

+ (id)JSONKeyPathsByPropertyKey;

- (id)iconImageURLs;
- (id)extraTitle;
- (id)couponDescription;
- (void)loadExtraDescriptionWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)componentSeparator;
- (id)iconImageName;

@end
