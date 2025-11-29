@class NSString;

@interface UnionTransferRealNameInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int guideFlag;
@property (retain, nonatomic) NSString *guideWording;
@property (retain, nonatomic) NSString *leftButtonWording;
@property (retain, nonatomic) NSString *rightButtonWording;
@property (retain, nonatomic) NSString *uploadCreditUrl;
@property (retain, nonatomic) NSString *schemaUrl;

+ (void)initialize;

@end
