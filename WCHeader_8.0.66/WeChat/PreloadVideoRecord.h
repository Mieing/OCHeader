@class NSString;

@interface PreloadVideoRecord : NSObject <PBCoding>

@property (retain, nonatomic) NSString *m_nsTempPath;
@property (nonatomic) unsigned int m_uiAccessTime;
@property (retain, nonatomic) NSString *m_nsChatName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_m_nsTempPath;
+ (void)PBArrayAdd_m_uiAccessTime;
+ (void)PBArrayAdd_m_nsChatName;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)pathForTempVideo;
- (void).cxx_destruct;

@end
