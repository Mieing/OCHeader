@class NSString, NSData, NSMutableArray;

@interface FinderTabTipsByPassInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int tabTipsObjectIdType;
@property (nonatomic) unsigned long long topicId;
@property (nonatomic) unsigned int position;
@property (retain, nonatomic) NSString *wording;
@property (retain, nonatomic) NSData *byPassCustomInfo;
@property (retain, nonatomic) NSData *innerExpInfo;
@property (retain, nonatomic) NSMutableArray *connectExposeInfoList;

+ (void)initialize;

- (void)setConnectExposeInfoList:(id)a0;
- (id)connectExposeInfoList;
- (void)setInnerExpInfo:(id)a0;
- (id)innerExpInfo;
- (void)setByPassCustomInfo:(id)a0;
- (id)byPassCustomInfo;
- (void)setWording:(id)a0;
- (id)wording;
- (void)setPosition:(unsigned int)a0;
- (unsigned int)position;
- (void)setTopicId:(unsigned long long)a0;
- (unsigned long long)topicId;
- (void)setTabTipsObjectIdType:(unsigned int)a0;
- (unsigned int)tabTipsObjectIdType;
- (id)description;
- (id)debugDescription;

@end
