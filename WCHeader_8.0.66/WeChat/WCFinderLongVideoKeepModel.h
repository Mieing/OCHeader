@class WCFinderMediaInfo, NSString, WCFinderMegaVideo, WCFinderDataItem, WCFinderContact;

@interface WCFinderLongVideoKeepModel : MMObject <PBCoding>

@property (retain, nonatomic) WCFinderMegaVideo *megaVideo;
@property (retain, nonatomic) WCFinderContact *contact;
@property (nonatomic) double playPosition;
@property (retain, nonatomic) WCFinderMediaInfo *mediaInfo;
@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_megaVideo;
+ (void)PBArrayAdd_contact;
+ (void)PBArrayAdd_playPosition;
+ (void)PBArrayAdd_mediaInfo;
+ (void)PBArrayAdd_dataItem;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
