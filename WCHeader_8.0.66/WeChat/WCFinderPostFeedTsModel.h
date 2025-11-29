@class NSString;

@interface WCFinderPostFeedTsModel : NSObject <PBCoding>

@property (copy, nonatomic) NSString *feedId;
@property (nonatomic) long long timeStamp;
@property (nonatomic) long long useCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_feedId;
+ (void)PBArrayAdd_timeStamp;
+ (void)PBArrayAdd_useCount;
+ (void)initialize;
+ (BOOL)checkLatestPostDataItem:(id)a0;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
