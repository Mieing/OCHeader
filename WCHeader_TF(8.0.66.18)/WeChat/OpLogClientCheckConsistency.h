@class NSString;

@interface OpLogClientCheckConsistency : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *fileName;
@property (nonatomic) unsigned int fileOffset;
@property (nonatomic) unsigned int checkBufferSize;
@property (nonatomic) unsigned int seq;
@property (retain, nonatomic) NSString *checkBufferHash;
@property (nonatomic) unsigned int fileSize;
@property (nonatomic) unsigned int isRoot;
@property (nonatomic) unsigned int netType;
@property (retain, nonatomic) NSString *checkSum;
@property (retain, nonatomic) NSString *deviceType;
@property (retain, nonatomic) NSString *osversion;

+ (void)initialize;

@end
