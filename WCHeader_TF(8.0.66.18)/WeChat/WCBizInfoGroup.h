@class NSString, NSMutableArray, UILabel;

@interface WCBizInfoGroup : NSObject {
    UILabel *m_tipLabel;
}

@property (retain, nonatomic) NSMutableArray *m_arrayItem;
@property (retain, nonatomic) NSString *m_error;
@property (retain, nonatomic) NSString *m_footerTip;
@property (retain, nonatomic) NSString *m_headerTip;
@property (retain, nonatomic) NSString *m_footerTipsTitle;
@property (retain, nonatomic) NSString *m_footerTipsContent;

- (id)initWithFooterTip:(id)a0 headerTip:(id)a1 error:(id)a2;
- (id)initWithFooterTip:(id)a0 footerTipTitle:(id)a1 footerTipsContent:(id)a2 headerTip:(id)a3 error:(id)a4;
- (void)dealloc;
- (void)setError:(id)a0;
- (void)addItem:(id)a0;
- (id)getTipLabel;
- (void).cxx_destruct;

@end
