@class NSString;

@interface DownloadImageCache : NSObject <PBCoding>

@property (retain, nonatomic) NSString *m_nsMD5;
@property (retain, nonatomic) NSString *m_nsChatName;
@property (nonatomic) unsigned int m_uiLocalID;
@property (nonatomic) unsigned int m_uiLastReadTime;
@property (nonatomic) BOOL m_bHD;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_m_nsMD5;
+ (void)PBArrayAdd_m_nsChatName;
+ (void)PBArrayAdd_m_uiLocalID;
+ (void)PBArrayAdd_m_uiLastReadTime;
+ (void)PBArrayAdd_m_bHD;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (void).cxx_destruct;

@end
