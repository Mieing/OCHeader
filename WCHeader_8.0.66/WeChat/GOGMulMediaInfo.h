@class NSString, NSData, NSMutableArray;

@interface GOGMulMediaInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long mediaid;
@property (nonatomic) int mtype;
@property (nonatomic) int source;
@property (nonatomic) unsigned long long chatroomId;
@property (retain, nonatomic) NSString *toUsername;
@property (retain, nonatomic) NSString *snsUrl;
@property (retain, nonatomic) NSString *fileid;
@property (retain, nonatomic) NSString *filekey;
@property (retain, nonatomic) NSString *md5;
@property (nonatomic) unsigned long long createtime;
@property (nonatomic) unsigned int mediaWidth;
@property (nonatomic) unsigned int mediaHeight;
@property (retain, nonatomic) NSString *thumbUrl;
@property (nonatomic) unsigned int videoLen;
@property (nonatomic) unsigned int videoFps;
@property (nonatomic) unsigned int audioSampleRate;
@property (retain, nonatomic) NSString *videoCodec;
@property (retain, nonatomic) NSString *audioCodec;
@property (retain, nonatomic) NSString *qrcodeUrl;
@property (nonatomic) unsigned int chatroomSize;
@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSData *secInfo;
@property (retain, nonatomic) NSMutableArray *extNew;

+ (void)initialize;

@end
