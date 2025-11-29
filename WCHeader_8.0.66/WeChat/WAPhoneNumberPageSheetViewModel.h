@class WAPhoneNumberAuthorizeSheetInfo;
@protocol IWAPhoneNumberAuthorizePageSheet;

@interface WAPhoneNumberPageSheetViewModel : WAAuthPageSheetViewModel

@property (weak, nonatomic) id<IWAPhoneNumberAuthorizePageSheet> pageSheet;
@property (retain, nonatomic) WAPhoneNumberAuthorizeSheetInfo *infoModel;
@property (nonatomic) double maxListHeight;

- (id)init;

@end
