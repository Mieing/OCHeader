@class NSString, NSData;

@interface CdnUploadEmojiInfo : NSObject

@property (retain, nonatomic) NSString *filePath;
@property (retain, nonatomic) NSString *clientMsgId;
@property (nonatomic) long long emojiType;
@property (retain, nonatomic) NSData *extInfo;
@property (nonatomic) unsigned long long startTime;

- (void).cxx_destruct;

@end
