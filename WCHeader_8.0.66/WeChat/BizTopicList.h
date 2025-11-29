@class NSString, NSMutableArray;

@interface BizTopicList : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSMutableArray *topic;

+ (void)initialize;

- (void)setTopic:(id)a0;
- (id)topic;
- (void)setTitle:(id)a0;
- (id)title;

@end
