@class NSString, NSMutableArray;

@interface FeedRecord : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *description;
@property (retain, nonatomic) NSString *coverUrl;
@property (retain, nonatomic) NSString *coverUrlToken;
@property (retain, nonatomic) NSMutableArray *coverUrlWord;
@property (retain, nonatomic) NSString *fullCoverUrl;
@property (retain, nonatomic) NSString *fullCoverUrlToken;
@property (retain, nonatomic) NSMutableArray *shortTitle;
@property (nonatomic) unsigned int modifyTime;
@property (nonatomic) unsigned int flag;
@property (retain, nonatomic) NSString *shareCoverUrl;
@property (retain, nonatomic) NSString *shareCoverUrlToken;
@property (retain, nonatomic) NSMutableArray *shareCoverUrlWord;
@property (nonatomic) unsigned long long id;
@property (nonatomic) unsigned int updateTime;
@property (nonatomic) unsigned int shareCoverShowStyle;
@property (nonatomic) unsigned int cardShowStyle;

+ (void)initialize;

- (void)setCardShowStyle:(unsigned int)a0;
- (unsigned int)cardShowStyle;
- (void)setShareCoverShowStyle:(unsigned int)a0;
- (unsigned int)shareCoverShowStyle;
- (void)setUpdateTime:(unsigned int)a0;
- (unsigned int)updateTime;
- (void)setId:(unsigned long long)a0;
- (unsigned long long)id;
- (void)setShareCoverUrlWord:(id)a0;
- (id)shareCoverUrlWord;
- (void)setShareCoverUrlToken:(id)a0;
- (id)shareCoverUrlToken;
- (void)setShareCoverUrl:(id)a0;
- (id)shareCoverUrl;
- (void)setFlag:(unsigned int)a0;
- (unsigned int)flag;
- (void)setModifyTime:(unsigned int)a0;
- (unsigned int)modifyTime;
- (void)setShortTitle:(id)a0;
- (id)shortTitle;
- (void)setFullCoverUrlToken:(id)a0;
- (id)fullCoverUrlToken;
- (void)setFullCoverUrl:(id)a0;
- (id)fullCoverUrl;
- (void)setCoverUrlWord:(id)a0;
- (id)coverUrlWord;
- (void)setCoverUrlToken:(id)a0;
- (id)coverUrlToken;
- (void)setCoverUrl:(id)a0;
- (id)coverUrl;
- (void)setDescription:(id)a0;
- (id)description;

@end
