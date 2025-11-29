@class NSString;

@interface MsgPreloadVideoRecord : NSObject <PBCoding>

@property (retain, nonatomic) NSString *m_nsChatName;
@property (nonatomic) unsigned int m_uiLocalID;
@property (nonatomic) unsigned int m_uiAccessTime;
@property (nonatomic) unsigned int m_uiHasPreloadSize;
@property (nonatomic) BOOL m_bNonAutoClean;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_m_nsChatName;
+ (void)PBArrayAdd_m_uiLocalID;
+ (void)PBArrayAdd_m_uiAccessTime;
+ (void)PBArrayAdd_m_uiHasPreloadSize;
+ (void)PBArrayAdd_m_bNonAutoClean;
+ (void)initialize;

@end
