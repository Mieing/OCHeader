@class NSString, FinderJumpInfo;

@interface FinderCommentKeywordInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long keywordId;
@property (retain, nonatomic) NSString *keywordWording;
@property (retain, nonatomic) FinderJumpInfo *jumpInfo;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *refData;

+ (void)initialize;

- (void)setRefData:(id)a0;
- (id)refData;
- (void)setType:(unsigned int)a0;
- (unsigned int)type;
- (void)setJumpInfo:(id)a0;
- (id)jumpInfo;
- (void)setKeywordWording:(id)a0;
- (id)keywordWording;
- (void)setKeywordId:(unsigned long long)a0;
- (unsigned long long)keywordId;

@end
