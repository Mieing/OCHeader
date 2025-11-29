@class NSString, EmojiInfoObj;

@interface EmoticonThumbImageTask : NSObject

@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) EmojiInfoObj *emojiInfo;
@property (retain, nonatomic) NSString *savingPath;
@property (copy, nonatomic) id /* block */ sucBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithMd5:(id)a0 emojiInfo:(id)a1;
- (id)initWithMd5:(id)a0 emojiInfoBuf:(id)a1;
- (void).cxx_destruct;

@end
