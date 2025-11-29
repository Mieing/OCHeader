@class NSString, NSNumber, CJPayCommonProtocolModel;

@interface CJPayFaceRecognitionLeadPageModel : NSObject

@property (nonatomic) BOOL isSign;
@property (nonatomic) BOOL isLightTheme;
@property (copy, nonatomic) NSString *backgroundImageURL;
@property (nonatomic) BOOL isShowTopBrand;
@property (copy, nonatomic) NSString *topTitleImageURL;
@property (nonatomic) double topTitleImageHeight;
@property (nonatomic) double topTitleImageWidth;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *centerImageURL;
@property (copy, nonatomic) NSString *protocolDesc;
@property (copy, nonatomic) NSString *popupProtocolDesc;
@property (copy, nonatomic) NSString *agreementDesc;
@property (copy, nonatomic) NSString *agreementURL;
@property (copy, nonatomic) NSString *buttonStr;
@property (copy, nonatomic) NSString *retainStr;
@property (copy, nonatomic) NSString *retainBackButtonStr;
@property (nonatomic) BOOL hideProtocolCheckbox;
@property (copy, nonatomic) NSString *subButtonStr;
@property (nonatomic) BOOL isNeedRetain;
@property (nonatomic) BOOL enablePopUpOpt;
@property (retain, nonatomic) NSNumber *centerImageYoffet;
@property (retain, nonatomic) NSNumber *centerImageRadius;
@property (nonatomic) BOOL isProtocolCenterAlign;
@property (readonly, nonatomic) BOOL enableCountdown;
@property (nonatomic) long long countdownNumber;
@property (copy, nonatomic) id /* block */ userCancelBlock;
@property (copy, nonatomic) id /* block */ userActionBLock;
@property (copy, nonatomic) id /* block */ trackerBlock;
@property (readonly, copy, nonatomic) NSString *subTitleAttributedString;
@property (readonly, copy, nonatomic) CJPayCommonProtocolModel *protocolModel;
@property (readonly, copy, nonatomic) CJPayCommonProtocolModel *protocolModelForPopUp;

- (id)p_getGuideDesc;
- (id)p_getDescArray;
- (void).cxx_destruct;

@end
