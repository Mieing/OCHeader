@class MPChannelTimelineInfo, NSString, MPChannelTopBarInfo;

@interface MPChannelEntryData : MMObject <PBCoding>

@property (nonatomic) unsigned long long entryOption;
@property (retain, nonatomic) MPChannelTopBarInfo *topBarInfo;
@property (retain, nonatomic) MPChannelTimelineInfo *timelineInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_entryOption;
+ (void)PBArrayAdd_topBarInfo;
+ (void)PBArrayAdd_timelineInfo;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
