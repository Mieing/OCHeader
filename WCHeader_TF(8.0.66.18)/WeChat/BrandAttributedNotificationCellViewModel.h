@class NSMutableArray, CContact;

@interface BrandAttributedNotificationCellViewModel : BrandNotificationCellViewModel {
    NSMutableArray *m_messageTextArr;
    CContact *m_brandContact;
}

+ (BOOL)canCreateViewModelWithMsgWrap:(id)a0;

- (id)cellViewClassName;
- (void)updateBrandContact;
- (id)brandContact;
- (id)contactLabelStr;
- (id)headerImgUrl;
- (double)viewHeight;
- (id)messageText;
- (id)messageLabelStyles;
- (struct CGSize { double x0; double x1; })messageLabelSize;
- (struct CGSize { double x0; double x1; })messageLabelSizeAtIndex:(unsigned long long)a0;
- (double)firstMessageAttributedStringTopSpace;
- (double)timeLabelTopMargin;
- (id)notifyMsg;
- (id)arrText;
- (unsigned long long)messageAttributedStringCount;
- (unsigned int)messageAttributedStringMaxLineCountAtIndex:(unsigned long long)a0;
- (id)messageAttributedStringAtIndex:(unsigned long long)a0;
- (id)messageAttributedStringArr;
- (void).cxx_destruct;

@end
