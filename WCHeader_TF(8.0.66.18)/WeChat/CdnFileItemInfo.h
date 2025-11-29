@class NSString, NSData;

@interface CdnFileItemInfo : WXPBGeneratedMessage

@property (nonatomic) int fileType;
@property (retain, nonatomic) NSString *fullpath;
@property (retain, nonatomic) NSData *buffer;
@property (nonatomic) int format;
@property (nonatomic) int compress;
@property (retain, nonatomic) NSString *aeskey;

+ (void)initialize;

@end
