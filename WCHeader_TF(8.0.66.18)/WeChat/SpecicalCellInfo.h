@class CContact;

@interface SpecicalCellInfo : MMObject

@property (nonatomic) unsigned long long m_cellType;
@property (retain, nonatomic) CContact *m_Contact;

- (void).cxx_destruct;

@end
