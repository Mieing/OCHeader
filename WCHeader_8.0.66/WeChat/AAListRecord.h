@class NSString;

@interface AAListRecord : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *billNo;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) unsigned long long amount;
@property (retain, nonatomic) NSString *launchDate;
@property (nonatomic) unsigned int state;
@property (nonatomic) unsigned int role;
@property (retain, nonatomic) NSString *h5Url;
@property (retain, nonatomic) NSString *groupid;
@property (retain, nonatomic) NSString *payDate;

+ (void)initialize;

@end
