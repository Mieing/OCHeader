@class NSString;

@interface WASyncBaseCmd : MMObject

@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *appid;
@property (nonatomic) unsigned long long cmdType;
@property (nonatomic) unsigned int squence;
@property (nonatomic) unsigned int reportId;
@property (copy, nonatomic) NSString *cmdKey;
@property (nonatomic) unsigned int receiveCmdTimeStamp;
@property (copy, nonatomic) NSString *preDownloadRequestkey;

- (id)description;
- (id)cmdUniqueIdentifier;
- (void)parseBasePropertyFromWxaBaseCmd:(id)a0;
- (void).cxx_destruct;

@end
