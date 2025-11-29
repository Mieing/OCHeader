@class NSString, NSMutableArray;

@interface WCTimelineMissReadRecord : NSObject <PBCoding>

@property (nonatomic) unsigned long long missReadRecordId;
@property (retain, nonatomic) NSMutableArray *missReadFeeds;
@property (retain, nonatomic) NSMutableArray *weishangFeeds;
@property (retain, nonatomic) NSMutableArray *invisibleFeeds;
@property (nonatomic) unsigned int firstFeedCreatTime;
@property (nonatomic) BOOL isRealCreatTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_missReadRecordId;
+ (void)PBArrayAdd_missReadFeeds;
+ (void)PBArrayAdd_weishangFeeds;
+ (void)PBArrayAdd_firstFeedCreatTime;
+ (void)PBArrayAdd_isRealCreatTime;
+ (void)PBArrayAdd_invisibleFeeds;
+ (void)initialize;

@end
