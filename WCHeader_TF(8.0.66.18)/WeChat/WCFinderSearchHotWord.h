@class NSString, NSData, FinderEventInfo;

@interface WCFinderSearchHotWord : NSObject <PBCoding>

@property (copy, nonatomic) NSString *hotwordText;
@property (nonatomic) unsigned long long actionType;
@property (copy, nonatomic) NSString *link;
@property (copy, nonatomic) NSString *appid;
@property (retain, nonatomic) NSData *sessionBuffer;
@property (copy, nonatomic) NSString *reasonWording;
@property (retain, nonatomic) FinderEventInfo *eventInfo;
@property (nonatomic) unsigned long long hotwordId;
@property (retain, nonatomic) NSString *requestId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_hotwordText;
+ (void)PBArrayAdd_actionType;
+ (void)PBArrayAdd_link;
+ (void)PBArrayAdd_appid;
+ (void)PBArrayAdd_sessionBuffer;
+ (void)PBArrayAdd_reasonWording;
+ (void)PBArrayAdd_eventInfo;
+ (void)PBArrayAdd_hotwordId;
+ (void)PBArrayAdd_requestId;
+ (void)initialize;
+ (id)genWithDict:(id)a0;
+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;
+ (id)genRequestId;

- (id)getPBPropertyTable;
- (id)initWithFinderSearchHotWord:(id)a0 requestId:(id)a1;
- (id)initWithNativeSearchParams:(id)a0 requestId:(id)a1;
- (void).cxx_destruct;

@end
