@class NSString, AWEFindFriendsQRCodeModel;

@interface AWEFindFriendsQRCodeSectionViewModel : AWEBaseListSectionViewModel <AWEFindFriendsQRCodeSectionViewModelProtocol>

@property (retain, nonatomic) AWEFindFriendsQRCodeModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchQRCode;
- (id)getCacheImage;
- (id)getCacheURL;
- (void)requestQRCodeImage:(id)a0;
- (void)replaceSelfModels;
- (void)requestQRCode;
- (void)updateCache:(id)a0 qrCodeURL:(id)a1;
- (BOOL)enableUseCacheImage;
- (void).cxx_destruct;

@end
