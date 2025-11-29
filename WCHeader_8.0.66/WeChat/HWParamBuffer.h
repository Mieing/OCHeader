@class NSData;

@interface HWParamBuffer : WXPBGeneratedMessage

@property (nonatomic) unsigned int headerLen;
@property (retain, nonatomic) NSData *spsbuf;
@property (retain, nonatomic) NSData *ppsbuf;
@property (retain, nonatomic) NSData *vpsbuf;

+ (void)initialize;

@end
