@class NSString, NSDictionary, UIImage, NSArray, AWEUserModel;

@interface AWEShareQRCodeModel : NSObject <IESIMShareQRCodeModelProtocol>

@property (copy, nonatomic) NSDictionary *trackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) AWEUserModel *user;
@property (copy, nonatomic) NSString *itemName;
@property (copy, nonatomic) NSString *ownerName;
@property (copy, nonatomic) NSString *countString;
@property (copy, nonatomic) NSString *firstLineText;
@property (copy, nonatomic) NSString *secondLineText;
@property (copy, nonatomic) NSString *thirdLineText;
@property (nonatomic) BOOL useRebrandStyle;
@property (copy, nonatomic) NSString *edtionID;
@property (copy, nonatomic) NSString *itemId;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (copy, nonatomic) NSString *shareScene;
@property (copy, nonatomic) NSDictionary *activityInfo;
@property (copy, nonatomic) NSDictionary *degradeQRCodeDic;
@property (nonatomic) BOOL showsIM;
@property (nonatomic) BOOL showMask;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (retain, nonatomic) UIImage *customGuideImage;
@property (copy, nonatomic) NSString *customGuideText;
@property (retain, nonatomic) UIImage *customGuideImageForSave;
@property (copy, nonatomic) NSString *qrCodeButton;
@property (copy, nonatomic) NSArray *forbidChannels;

- (void).cxx_destruct;

@end
