@class NSString, BDPUniqueID, BDPGameFacialRecognitionView;

@interface BDPGameFacialRecognitionManager : NSObject <BDPGameFacialRecognitionViewDelegate>

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) NSString *nameMask;
@property (weak, nonatomic) BDPGameFacialRecognitionView *facialView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareManager:(id)a0;

- (void)trackMPPopupShow:(id)a0;
- (void)fetchUserNameMask:(id /* block */)a0;
- (void)trackMPPopupClick:(id)a0 payType:(id)a1;
- (void)onFacialRecognitionReject:(id)a0;
- (void)onFacialRecognitionAccept:(id)a0;
- (BOOL)onFacialRecognitionLinkClick:(id)a0 url:(id)a1;
- (void)showPyFacialRecognition:(id /* block */)a0 payType:(id)a1;
- (void).cxx_destruct;
- (id)initWithUniqueID:(id)a0;

@end
