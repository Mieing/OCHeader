@class NSData, NSString;

@interface MMAutoAuthWrap : NSObject <PBCoding>

@property (nonatomic) unsigned int m_uiVersion;
@property (retain, nonatomic) NSData *m_dtAutoAuthKey;
@property (retain, nonatomic) NSData *m_dtServerId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_m_dtAutoAuthKey;
+ (void)PBArrayAdd_m_dtServerId;
+ (void)PBArrayAdd_m_uiVersion;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (void).cxx_destruct;

@end
