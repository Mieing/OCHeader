@class NSString;

@interface AWEContactsRequestAndUploadParamsModel : NSObject

@property (nonatomic) BOOL showAddressbookList;
@property (nonatomic) BOOL isFromRequestAddressBookPermission;
@property (nonatomic) BOOL isFromUploadAddressBookOnView;
@property (nonatomic) BOOL isPermitted;
@property (nonatomic) BOOL isInitial;
@property (nonatomic) BOOL isFirstRequestTime;
@property (nonatomic) BOOL needUpload;
@property (retain, nonatomic) NSString *requestCert;
@property (retain, nonatomic) NSString *uploadCert;
@property (nonatomic) BOOL authUIDAfterDIDHasAuthedInColdLaunch;

- (void).cxx_destruct;

@end
