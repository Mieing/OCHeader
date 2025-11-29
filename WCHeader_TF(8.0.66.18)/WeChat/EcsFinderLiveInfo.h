@class NSString, NSNumber;

@interface EcsFinderLiveInfo : NSObject

@property (copy, nonatomic) NSString *finderExportId;
@property (retain, nonatomic) NSNumber *liveStatus;
@property (copy, nonatomic) NSString *liveDesc;

+ (id)makeWithFinderExportId:(id)a0 liveStatus:(id)a1 liveDesc:(id)a2;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
