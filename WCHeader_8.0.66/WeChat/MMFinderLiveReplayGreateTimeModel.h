@class NSString;

@interface MMFinderLiveReplayGreateTimeModel : NSObject

@property (copy, nonatomic) NSString *greateDesc;
@property (nonatomic) double greateTime;
@property (copy, nonatomic) NSString *thumbUrl;
@property (nonatomic) unsigned long long srcType;

+ (id)createGreateTimeModel:(id)a0;
+ (id)transferToSortedGreateTimeListFromAnchorSpecified:(id)a0 autoDetection:(id)a1;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
