@class NSMutableArray;

@interface WCPayOverseaMainWalletDataSource : NSObject

@property (retain, nonatomic) NSMutableArray *m_dataSource;

- (id)initWithTpaCountry:(unsigned int)a0 PayFunctionListRespObject:(id)a1 IBGGetWalletCgiCache:(id)a2 ReadList:(id)a3 rowCount:(unsigned long long)a4;
- (id)initWithTpaCountry:(unsigned int)a0 PayFunctionListRespObject:(id)a1 IBGGetWalletCgiCache:(id)a2 ReadList:(id)a3 rowCount:(unsigned long long)a4 rightTopNew:(BOOL)a5;
- (void)calculateFooterView;
- (void)updateWithPayFunctionListRespObject:(id)a0 ReadList:(id)a1 rowCount:(unsigned long long)a2 walletRegionDesc:(id)a3 rightTopNew:(BOOL)a4;
- (id)dataAtSection:(long long)a0;
- (long long)count;
- (void).cxx_destruct;

@end
