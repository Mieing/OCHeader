@class NSString;

@interface LoginDevice : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSString *devicename;
@property (retain, nonatomic) NSString *devicetype;
@property (nonatomic) unsigned int lasttime;
@property (nonatomic) BOOL online;

+ (void)initialize;

@end
