@class NSString, IESLLPOIDetailResponse, IESLLPOIDetailStore, LLDitoPageContext, IESLLPOIDetailTableViewLocationCell;

@interface IESLLPOIDetailInfoLocationCellViewModel : IESLLPOIDetailInfoSeparatorViewModel <IESLLPOIDetailTableViewLocationCellDelegate>

@property (retain, nonatomic) IESLLPOIDetailTableViewLocationCell *locationCell;
@property (retain, nonatomic) IESLLPOIDetailResponse *poiDetail;
@property (retain, nonatomic) IESLLPOIDetailStore *store;
@property (nonatomic) BOOL hasPermission;
@property (nonatomic) BOOL hasPhoneNumber;
@property (nonatomic) BOOL hasCompanyPage;
@property (weak, nonatomic) LLDitoPageContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)preferredHeightForDataModel:(id)a0 width:(double)a1 margin:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a3 cellIdentifier:(id)a4;
+ (BOOL)p_phoneIsEnabledWithPOI:(id)a0;
+ (BOOL)p_companyIsEnabledWithPOI:(id)a0;

- (void)setupViewModel;
- (void)poi_onAppear;
- (void)updateCell:(id)a0 infoModel:(id)a1 showDistance:(BOOL)a2 distance:(id)a3;
- (void)userTapOnCallButtonInLocationCell:(id)a0;
- (void)userTapOnCompanyButtonInLocationCell:(id)a0;
- (void)userTapOnNavigateButtonInLocationCell:(id)a0;
- (void).cxx_destruct;
- (void)handleTap:(id)a0;
- (void)updateWithModel:(id)a0;

@end
