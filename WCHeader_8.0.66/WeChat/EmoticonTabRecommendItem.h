@class NSString;

@interface EmoticonTabRecommendItem : NSObject <PBCoding>

@property (retain, nonatomic) NSString *m_productId;
@property (retain, nonatomic) NSString *m_iconUrl;
@property (retain, nonatomic) NSString *m_bigIconUrl;
@property (retain, nonatomic) NSString *m_recType;
@property (retain, nonatomic) NSString *m_name;
@property (retain, nonatomic) NSString *m_recWord;
@property (nonatomic) unsigned int m_buttonType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_m_name;
+ (void)PBArrayAdd_m_productId;
+ (void)PBArrayAdd_m_iconUrl;
+ (void)PBArrayAdd_m_bigIconUrl;
+ (void)PBArrayAdd_m_recType;
+ (void)PBArrayAdd_m_recWord;
+ (void)PBArrayAdd_m_buttonType;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (void)updateFromItem:(id)a0;
- (void).cxx_destruct;

@end
