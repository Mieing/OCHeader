@class NSString, CEmoticonWrap;

@interface RelatedEmoticonReportObject : NSObject

@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *chatID;
@property (retain, nonatomic) NSString *searchID;
@property (retain, nonatomic) CEmoticonWrap *sourceEmoticonWrap;
@property (nonatomic) unsigned long long maxRowCount;

+ (void)reportLongPressMessageMenuFromMessageWrap:(id)a0;
+ (void)reportSessionId:(id)a0 action:(unsigned int)a1 sourcePid:(id)a2 sourceMd5:(id)a3 pid:(id)a4 md5:(id)a5 index:(unsigned int)a6 maxRowCount:(unsigned int)a7 isFree:(id)a8 type:(id)a9 isLocal:(id)a10 chatID:(id)a11 searchID:(id)a12;

- (void)reportTapRelatedEmoticonMenuItem;
- (void)reportEmoticonExporsureWithEmojiInfos:(id)a0;
- (void)reportTapEmoticonWithEmojiInfo:(id)a0 atIndex:(unsigned long long)a1;
- (void)reportTabWeSearchMoreEmoticon;
- (void).cxx_destruct;

@end
