@class WCAccountBindPhoneControlLogic, NSString;

@interface MMSetWXAliasHandler : PrivateCommonApiHandler <WCAccountBindPhoneControlLogicDelegate>

@property (retain, nonatomic) WCAccountBindPhoneControlLogic *logic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
