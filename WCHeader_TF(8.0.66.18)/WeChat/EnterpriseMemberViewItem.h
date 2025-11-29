@class NSString;

@interface EnterpriseMemberViewItem : MMObject

@property (retain, nonatomic) NSString *m_nsUsrName;
@property (nonatomic) unsigned int m_uiViewType;
@property (retain, nonatomic) NSString *m_nsAddUrl;
@property (retain, nonatomic) NSString *m_nsBrandName;

- (void).cxx_destruct;

@end
