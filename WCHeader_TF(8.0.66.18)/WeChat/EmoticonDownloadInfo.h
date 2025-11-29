@class NSString, EmojiInfoObj, NSMutableSet;

@interface EmoticonDownloadInfo : NSObject

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) EmojiInfoObj *emojiInfoObj;
@property (retain, nonatomic) NSMutableSet *msgWrapSet;
@property (nonatomic) BOOL isDownloading;

- (id)description;
- (void).cxx_destruct;

@end
