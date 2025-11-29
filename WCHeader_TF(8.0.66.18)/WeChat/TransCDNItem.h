@class NSString;

@interface TransCDNItem : WXPBGeneratedMessage

@property (nonatomic) unsigned int clientId;
@property (retain, nonatomic) NSString *fileId;
@property (retain, nonatomic) NSString *aesKey;
@property (nonatomic) unsigned int favDataType;
@property (nonatomic) unsigned long long size;
@property (retain, nonatomic) NSString *clientStrId;

+ (void)initialize;

@end
