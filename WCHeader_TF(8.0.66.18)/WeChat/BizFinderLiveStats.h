@class NSNumber, NSString;

@interface BizFinderLiveStats : NSObject

@property (retain, nonatomic) NSNumber *finderObjId;
@property (retain, nonatomic) NSNumber *liveId;
@property (copy, nonatomic) NSString *username;
@property (retain, nonatomic) NSNumber *onlineCount;
@property (retain, nonatomic) NSNumber *liveStatus;
@property (retain, nonatomic) NSNumber *disableAutoPlay;

+ (id)makeWithFinderObjId:(id)a0 liveId:(id)a1 username:(id)a2 onlineCount:(id)a3 liveStatus:(id)a4 disableAutoPlay:(id)a5;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
