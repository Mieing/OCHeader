@class NSString, CEmoticonWrap;

@interface EmoticonRemoteRecentUse : NSObject <PBCoding>

@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) NSString *query;
@property (nonatomic) unsigned int lastUsedTime;
@property (retain, nonatomic) CEmoticonWrap *refEmoticon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_md5;
+ (void)PBArrayAdd_query;
+ (void)PBArrayAdd_lastUsedTime;
+ (void)PBArrayAdd_refEmoticon;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
