@class NSString, NSMutableArray;

@interface VOIPRecentConnect : NSObject <PBCoding>

@property (retain, nonatomic) NSMutableArray *m_videoRecentConnectUserName;
@property (retain, nonatomic) NSMutableArray *m_voiceRecentConnectUserName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_m_videoRecentConnectUserName;
+ (void)PBArrayAdd_m_voiceRecentConnectUserName;
+ (void)initialize;
+ (id)getSaveRootDir;
+ (id)getSavePath;
+ (id)loadFromFile;

- (id)getPBPropertyTable;
- (id)init;
- (id)getRecentVideoConnect;
- (id)getRecentVoiceContact;
- (void)addRecentVideoConnect:(id)a0;
- (void)addRecentVoiceConnect:(id)a0;
- (void)saveToCache;
- (void).cxx_destruct;

@end
