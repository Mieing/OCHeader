@class NSString, EncryptLocation;

@interface Event : WXPBGeneratedMessage

@property (retain, nonatomic) EncryptLocation *location;
@property (nonatomic) unsigned int bizId;
@property (nonatomic) unsigned int action;
@property (nonatomic) unsigned int payScene;
@property (nonatomic) unsigned int payChannel;
@property (retain, nonatomic) NSString *uuid;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int bizScene;

+ (void)initialize;

@end
