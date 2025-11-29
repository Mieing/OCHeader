@class NSString;

@interface CdnTransforProfile : WXPBGeneratedMessage

@property (nonatomic) unsigned int transportProtocol;
@property (nonatomic) int transportProtocolError;
@property (nonatomic) unsigned long long previousCompletedSize;
@property (nonatomic) unsigned long long recvedBytes;
@property (nonatomic) unsigned long long sentBytes;
@property (nonatomic) int seqCheck;
@property (retain, nonatomic) NSString *jsonProfile;

+ (void)initialize;

@end
