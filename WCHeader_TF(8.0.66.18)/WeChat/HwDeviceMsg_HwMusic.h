@class NSString;

@interface HwDeviceMsg_HwMusic : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *des;
@property (nonatomic) int type;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *lowurl;
@property (retain, nonatomic) NSString *dataurl;
@property (retain, nonatomic) NSString *lowdataurl;
@property (retain, nonatomic) NSString *appname;
@property (retain, nonatomic) NSString *cdnthumburl;
@property (nonatomic) unsigned int cdnthumblength;
@property (retain, nonatomic) NSString *cdnthumbaeskey;

+ (void)initialize;

@end
