@class NSString, NSArray, WCPayECardRealNameInfo;

@interface WCPayRealnameGuideInfo : NSObject

@property (nonatomic) unsigned int guideFlag;
@property (retain, nonatomic) NSString *guideWording;
@property (retain, nonatomic) NSString *leftButtonWording;
@property (retain, nonatomic) NSString *rightButtonWording;
@property (retain, nonatomic) NSString *uploadCreditUrl;
@property (nonatomic) int realnameScene;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subTitle;
@property (retain, nonatomic) NSArray *uploadReasons;
@property (retain, nonatomic) NSString *doneButtonTitle;
@property (retain, nonatomic) NSString *uploadCreditUrlNew;
@property (nonatomic) BOOL isShowProtocol;
@property (retain, nonatomic) NSString *leftProtocolWording;
@property (retain, nonatomic) NSString *rightProtocolWording;
@property (retain, nonatomic) NSString *protocolUrl;
@property (retain, nonatomic) WCPayECardRealNameInfo *ecard_info;

+ (id)genFromUnion:(id)a0;

- (void).cxx_destruct;

@end
