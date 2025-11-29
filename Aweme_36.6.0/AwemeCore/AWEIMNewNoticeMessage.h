@class NSString;

@interface AWEIMNewNoticeMessage : AWEIMNoticeMessage

@property (retain, nonatomic) NSString *fallbackTips;

- (id)initWithContentDict:(id)a0;
- (BOOL)isUserCellType;
- (id)getContentDict;
- (void)setLocalExtWithAttachMsg:(id)a0;
- (id)initWithTips:(id)a0 templateArray:(id)a1 fallbackTips:(id)a2;
- (void)setAttachMsg:(id)a0;
- (void)setAttachStrangerMsg:(id)a0;
- (void).cxx_destruct;

@end
