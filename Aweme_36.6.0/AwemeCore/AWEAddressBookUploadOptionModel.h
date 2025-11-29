@class NSDictionary, NSString;
@protocol BDPrivacyCertProtocol;

@interface AWEAddressBookUploadOptionModel : NSObject

@property (nonatomic) BOOL needLoadingView;
@property (nonatomic) BOOL isInitiative;
@property (nonatomic) BOOL showAddressbookList;
@property (retain, nonatomic) NSDictionary *trackParams;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) id<BDPrivacyCertProtocol> requestCert;
@property (retain, nonatomic) id<BDPrivacyCertProtocol> loadCert;
@property (nonatomic) BOOL needUpload;
@property (nonatomic) BOOL isFirstFunction;
@property (nonatomic) BOOL authUIDAfterDIDHasAuthedInColdLaunch;

- (void).cxx_destruct;
- (id)init;

@end
