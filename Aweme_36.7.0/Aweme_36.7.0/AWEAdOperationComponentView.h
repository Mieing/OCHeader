@class NSString, UIImageView, AWEAwemeModel, UILabel, UIView, YYLabel;
@protocol AWEAdOperationGuidTagView, AWEAdOperationGuideStarView;

@interface AWEAdOperationComponentView : UIView <BDATMAutoTrackerViewProtocol, AWEAdOperationComponentView>

@property (retain, nonatomic) UIImageView *logoImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIView *appInfoView;
@property (retain, nonatomic) UIView<AWEAdOperationGuideStarView> *starView;
@property (retain, nonatomic) UIView *seperatorView;
@property (retain, nonatomic) UILabel *userCountLabel;
@property (retain, nonatomic) YYLabel *descLabel;
@property (retain, nonatomic) UIView<AWEAdOperationGuidTagView> *tagsView;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *eventName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) NSString *referString;

- (void)configWithModel:(id)a0;
- (void)openClickAutoTracker;
- (id)createContentDescriptionStringFrom:(id)a0;
- (void)componentTapped:(id)a0;
- (void)setupAppInfoLayout;
- (BOOL)shouldHideAppInfo;
- (double)descriptionWidth;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (id)init;
- (void)_setupUI;

@end
