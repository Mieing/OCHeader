@class BizMsgResortV2Context, NSString;

@interface ReddotExposeMoment : WXPBGeneratedMessage

@property (retain, nonatomic) BizMsgResortV2Context *boxContext;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned long long time;
@property (retain, nonatomic) NSString *lastPageName;

+ (void)initialize;

- (void)setLastPageName:(id)a0;
- (id)lastPageName;
- (void)setTime:(unsigned long long)a0;
- (unsigned long long)time;
- (void)setScene:(unsigned int)a0;
- (unsigned int)scene;
- (void)setBoxContext:(id)a0;
- (id)boxContext;

@end
