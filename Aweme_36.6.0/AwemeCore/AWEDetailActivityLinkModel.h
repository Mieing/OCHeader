@class NSString, AWEDetailURLModel, UIImage;

@interface AWEDetailActivityLinkModel : AWEDetailCommonDiffableModel <AWEDetailRoutable, AWEDetailLinkModel>

@property (copy, nonatomic) NSString *webTitle;
@property (copy, nonatomic) NSString *webURL;
@property (retain, nonatomic) AWEDetailURLModel *iconURLModel;
@property (nonatomic) BOOL isShowingConfiguredActivity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double topInset;
@property (nonatomic) double bottomInset;
@property (readonly, nonatomic) UIImage *iconImage;
@property (copy, nonatomic) NSString *displayText;

- (id)routeURLString;
- (void).cxx_destruct;

@end
