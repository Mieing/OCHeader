@class WAPlateAuthorizePageSheet, WAPlateAuthorizeSheetInfo;

@interface WAPlateAuthPageSheetViewModel : WAAuthPageSheetViewModel

@property (weak, nonatomic) WAPlateAuthorizePageSheet *pageSheet;
@property (retain, nonatomic) WAPlateAuthorizeSheetInfo *infoModel;
@property (copy, nonatomic) id /* block */ scrollToPlateAction;

- (void).cxx_destruct;

@end
