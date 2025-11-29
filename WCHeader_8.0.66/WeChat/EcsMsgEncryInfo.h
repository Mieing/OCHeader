@class EcsMsgExtInfo, NSString;

@interface EcsMsgEncryInfo : WXPBGeneratedMessage

@property (retain, nonatomic) EcsMsgExtInfo *msgExtinfo;
@property (retain, nonatomic) NSString *encryKey;
@property (nonatomic) unsigned int useOrderKey;

+ (void)initialize;

@end
