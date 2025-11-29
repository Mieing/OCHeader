@class NSString;

@interface ImageAutoControl : NSObject <PBCoding>

@property (nonatomic) double m_douLimitBegin;
@property (nonatomic) int m_nDownloadCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_m_douLimitBegin;
+ (void)PBArrayAdd_m_nDownloadCount;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;

@end
