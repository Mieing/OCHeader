@class NSString;

@interface CheckMobileSIMTypeReq : WXPBGeneratedMessage

@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *ip;
@property (retain, nonatomic) NSString *imsi;
@property (retain, nonatomic) NSString *imei;
@property (retain, nonatomic) NSString *idfa;
@property (retain, nonatomic) NSString *idfv;

+ (void)initialize;

@end
