@class WAPlateAuthPageSheetViewModel, WAPlateAuthorizeSheetInfo;
@protocol WAPlateAuthorizePageSheetDelegate;

@interface WAPlateAuthorizePageSheet : WAAuthorizePageSheet

@property (retain, nonatomic) WAPlateAuthPageSheetViewModel *paViewModel;
@property (retain, nonatomic) WAPlateAuthorizeSheetInfo *info;
@property (weak, nonatomic) id<WAPlateAuthorizePageSheetDelegate> authDelegate;

- (id)initWithInfo:(id)a0;
- (void)managerPlate;
- (void)calSelectedId;
- (void)scrollToCurrentIndex;
- (void)updatePlateInfo:(id)a0;
- (id)customSubviewClassList;
- (id)subViewModel;
- (void).cxx_destruct;

@end
