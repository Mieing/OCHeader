@class NSString, CPushContact;

@interface MMSayHelloButton : UIButton <FriendAsistSessionExt> {
    CPushContact *m_oLastVerifyContact;
    NSString *m_nsUsrName;
    unsigned int m_uiUnReadCount;
    double m_fHeight;
}

- (id)initWithUsrName:(id)a0 Height:(double)a1;
- (void)UpdateView;
- (unsigned int)GetUnReadCount;
- (void)onFriendAssistUnreadCountChanged;
- (void).cxx_destruct;

@end
