@class NSString, NSData;

@interface WARemoteDebug_DataFormat : WXPBGeneratedMessage

@property (nonatomic) unsigned int cmd;
@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSData *data;

+ (void)initialize;

@end
