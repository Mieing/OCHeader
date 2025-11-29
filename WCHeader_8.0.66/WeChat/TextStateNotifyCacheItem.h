@class NSString;

@interface TextStateNotifyCacheItem : NSObject <PBCoding>

@property (retain, nonatomic) NSString *textStateId;
@property (nonatomic) unsigned int doLikeCount;
@property (nonatomic) unsigned long long doLikeCountVersion;
@property (nonatomic) unsigned int referenceCount;
@property (nonatomic) unsigned int commentCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_textStateId;
+ (void)PBArrayAdd_doLikeCount;
+ (void)PBArrayAdd_referenceCount;
+ (void)PBArrayAdd_doLikeCountVersion;
+ (void)PBArrayAdd_commentCount;
+ (void)initialize;

- (id)getPBPropertyTable;
- (unsigned int)count;
- (void).cxx_destruct;

@end
