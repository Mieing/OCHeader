@class NSString, AWEAwemeModel;

@interface AWEGeneralViewAnchorModel : NSObject <AWECommentListHeaderViewExtraInfoProtocol, AWECommentListHeaderViewExtraInfoCustomProtocol>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *openURL;
@property (copy, nonatomic) NSString *commentOpenURL;
@property (copy, nonatomic) NSString *anchorType;
@property (copy, nonatomic) NSString *titleTag;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *anchorID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)customCommentOpenUrl;
- (id)customOpenURL;
- (void)configCommentOpenUrl:(id)a0;
- (id)customTitleTag;
- (id)iconImageURLs;
- (id)extraTitle;
- (id)couponDescription;
- (void)loadExtraDescriptionWithCompletion:(id /* block */)a0;
- (double)imageIconCornerRadius;
- (void)configCommentOpenURL;
- (id)addAdEventParamsWith:(id)a0;
- (id)contentString:(id)a0 withExtraLink:(id)a1;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (id)componentSeparator;
- (id)iconImageName;
- (id)customTitle;

@end
