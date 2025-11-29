@protocol WCPayF2FAnnouncementCgiDelegate;

@interface WCPayF2FAnnouncementCgi : WCPayBaseCgi

@property (weak, nonatomic) id<WCPayF2FAnnouncementCgiDelegate> m_delegate;

- (id)initWithDelegate:(id)a0;
- (void)startRequest;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0;
- (void).cxx_destruct;

@end
