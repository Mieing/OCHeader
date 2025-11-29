@class NSString;

@interface BizLatestItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *bizName;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) unsigned int sendTime;

+ (void)initialize;

- (void)setSendTime:(unsigned int)a0;
- (unsigned int)sendTime;
- (void)setTitle:(id)a0;
- (id)title;
- (void)setBizName:(id)a0;
- (id)bizName;

@end
