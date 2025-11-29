@class NSString, UIViewController;
@protocol WCFinderQRCodeViewModelDelegate;

@interface WCFinderQRCodeViewModel : NSObject <WCFinderGetUserCgiDelegate>

@property (copy, nonatomic) NSString *userQRCodeUrl;
@property (nonatomic) int entryScene;
@property (weak, nonatomic) UIViewController *viewCtrl;
@property (weak, nonatomic) id<WCFinderQRCodeViewModelDelegate> delegate;
@property (copy, nonatomic) NSString *fromUserName;
@property (copy, nonatomic) NSString *talkerName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startHandleFinderUserQRCodeUrl:(id)a0;
- (void)startHandleFinderFeedQRCodeUrl:(id)a0 scanType:(unsigned int)a1;
- (void)getUserCgi:(id)a0 didGetResponse:(id)a1;
- (void)getUserCgi:(id)a0 didFailWithError:(id)a1;
- (id)parseFinderFeedQRCodeUrl:(id)a0;
- (id)parseQuerysWithUrlString:(id)a0;
- (void).cxx_destruct;

@end
