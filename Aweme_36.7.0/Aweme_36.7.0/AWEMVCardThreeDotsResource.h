@class AWEMVCardExtendView, NSString, AWEDCFeedPageContext, AWEAwemeModel, AWEDCFeedBaseCellElement;

@interface AWEMVCardThreeDotsResource : NSObject <AWEMVCardViewResourceProtocol>

@property (retain, nonatomic) AWEMVCardExtendView *threeDotButton;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWEDCFeedPageContext *context;
@property (weak, nonatomic) AWEDCFeedBaseCellElement *containerElement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imageWithName:(id)a0;

- (void)themeDidChange:(long long)a0;
- (id)initWithContext:(id)a0 model:(id)a1;
- (void)refreshWithAwemeModel:(id)a0 context:(id)a1 containerElement:(id)a2;
- (void)didClickedButton:(id)a0 event:(id)a1;
- (double)iconSize;
- (void).cxx_destruct;
- (void)reset;
- (id)containerView;
- (void)setupViews;

@end
