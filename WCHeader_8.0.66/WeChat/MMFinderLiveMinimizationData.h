@class WCFinderDataItem, NSString, WCFinderLiveShareItem;

@interface MMFinderLiveMinimizationData : MMObject <PBCoding>

@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) WCFinderDataItem *finderDataItem;
@property (retain, nonatomic) WCFinderLiveShareItem *finderLiveShareItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_liveId;
+ (void)PBArrayAdd_finderDataItem;
+ (void)PBArrayAdd_finderLiveShareItem;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)initWithLiveId:(unsigned long long)a0 dataItem:(id)a1;
- (void).cxx_destruct;

@end
