@class NSString, NSMutableDictionary;

@interface IESIMLittleEmoticonLostTracker : NSObject

@property (retain, nonatomic) NSMutableDictionary *params;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *emojiText;
@property (copy, nonatomic) NSString *md5;
@property (nonatomic) BOOL fileExist;
@property (nonatomic) long long errCode;
@property (nonatomic) long long lostFileCount;

- (void)setErrCode:(long long)a0;
- (void)setFileExist:(BOOL)a0;
- (void)setEmojiText:(id)a0;
- (void)setLostFileCount:(long long)a0;
- (void)setScene:(id)a0;
- (void).cxx_destruct;
- (void)report;
- (id)init;
- (void)setSource:(id)a0;
- (void)setMd5:(id)a0;

@end
