@class NSString, NSMutableArray, FeedRecord;

@interface FinderModFeedInfo : WXPBGeneratedMessage

@property (retain, nonatomic) FeedRecord *initialInfo;
@property (retain, nonatomic) NSMutableArray *history;
@property (retain, nonatomic) NSString *commentTipsWording;
@property (nonatomic) unsigned int modifyButtonStatus;
@property (retain, nonatomic) NSString *buttonTipsWording;

+ (void)initialize;

- (void)setButtonTipsWording:(id)a0;
- (id)buttonTipsWording;
- (void)setModifyButtonStatus:(unsigned int)a0;
- (unsigned int)modifyButtonStatus;
- (void)setCommentTipsWording:(id)a0;
- (id)commentTipsWording;
- (void)setHistory:(id)a0;
- (id)history;
- (void)setInitialInfo:(id)a0;
- (id)initialInfo;

@end
