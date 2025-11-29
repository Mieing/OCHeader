@interface AWEIMTopGroupNoticeMessage : AWEIMGroupNoticeMessage

@property (nonatomic) unsigned long long groupCreateType;
@property (nonatomic) unsigned long long style;
@property (nonatomic) double noticeLabelWidth;
@property (nonatomic) double profileLabelWidth;

- (id)initWithContentDict:(id)a0;
- (id)getContentDict;
- (void)setConversationID:(id)a0;

@end
