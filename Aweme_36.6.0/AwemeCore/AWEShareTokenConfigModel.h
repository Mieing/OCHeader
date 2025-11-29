@class NSString;

@interface AWEShareTokenConfigModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *textShareBtnWeixin;
@property (copy, nonatomic) NSString *textShareBtnQQ;
@property (copy, nonatomic) NSString *imageShareBtnWeixin;
@property (copy, nonatomic) NSString *imageShareBtnQQ;
@property (copy, nonatomic) NSString *imageSaveShareBtnWeixin;
@property (copy, nonatomic) NSString *imageSaveShareBtnQQ;
@property (nonatomic) double qrCodeWidth;
@property (nonatomic) double textTokenAvatarWidth;
@property (copy, nonatomic) NSString *textTokenFailHint;
@property (copy, nonatomic) NSString *textTokenSuccessHint;
@property (copy, nonatomic) NSString *saveQRCodeAndTextTokenHint;
@property (copy, nonatomic) NSString *onlySaveTextTokenToast;
@property (nonatomic) double hintMinHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
