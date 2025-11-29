@class AWEIMSelectSingleGroupPanelConfiguration, NSString, IESIMContactPickerController;

@interface AWEIMTransferSelectSinglePanelFactory : HTSService <IESIMContactPickerControllerDelegate, AWEIMTransferSelectSinglePanelFactory>

@property (retain, nonatomic) IESIMContactPickerController *pickerController;
@property (retain, nonatomic) AWEIMSelectSingleGroupPanelConfiguration *config;
@property (retain, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
