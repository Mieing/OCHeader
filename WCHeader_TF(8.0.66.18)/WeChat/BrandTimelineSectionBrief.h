@class NSString;

@interface BrandTimelineSectionBrief : NSObject

@property (nonatomic) long long rowCount;
@property (retain, nonatomic) NSString *sectionClassName;
@property (retain, nonatomic) NSString *briefDescription;
@property (nonatomic) unsigned long long m_n64MesSvrId;
@property (nonatomic) long long arrReaderWrapCount;
@property (nonatomic) long long arrItemViewModelCount;
@property (nonatomic) long long itemShowCount;

- (id)initWithBaseSectionData:(id)a0 andRowCount:(long long)a1;
- (id)description;
- (void).cxx_destruct;

@end
