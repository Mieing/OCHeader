@class NSString;

@interface WCCardChooseInfo : MMObject

@property (retain, nonatomic) NSString *cardId;
@property (retain, nonatomic) NSString *cardTpId;
@property (nonatomic) unsigned int cardType;
@property (nonatomic) unsigned int endTime;
@property (retain, nonatomic) NSString *color;
@property (retain, nonatomic) NSString *logoUrl;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subTitle;
@property (retain, nonatomic) NSString *encryptCode;
@property (retain, nonatomic) NSString *shareUserName;
@property (retain, nonatomic) NSString *appId;
@property (nonatomic) unsigned int genType;
@property (retain, nonatomic) NSString *invoiceTitle;
@property (retain, nonatomic) NSString *invoiceItem;
@property (nonatomic) unsigned int chooseOptional;
@property (retain, nonatomic) NSString *invoiceStatus;

- (void)parseFromJSONDic:(id)a0;
- (void).cxx_destruct;

@end
