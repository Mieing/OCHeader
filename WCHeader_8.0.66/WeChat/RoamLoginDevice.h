@class NSString;

@interface RoamLoginDevice : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSString *devicename;
@property (retain, nonatomic) NSString *devicetype;
@property (nonatomic) unsigned int lasttime;
@property (nonatomic) unsigned int online;
@property (nonatomic) unsigned int deviceTypeId;

+ (void)initialize;

@end
