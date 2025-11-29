@class NSString, CMessageWrap;

@interface MessageTipsViewModel : BaseChatViewModel

@property (retain, nonatomic) NSString *wording;
@property (nonatomic) unsigned long long tipsType;
@property (retain, nonatomic) CMessageWrap *msgWrap;

- (id)initWithTipsType:(unsigned long long)a0 wording:(id)a1;
- (id)cellViewClassName;
- (struct CGSize { double x0; double x1; })measure:(struct CGSize { double x0; double x1; })a0;
- (id)getTipsWording;
- (id)systemTextFont;
- (void).cxx_destruct;

@end
