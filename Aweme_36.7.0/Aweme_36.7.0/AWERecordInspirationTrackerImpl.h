@class NSString, NSMutableDictionary, AWERecordInspirationCategoryItem;

@interface AWERecordInspirationTrackerImpl : NSObject <AWERecordInspirationTrackerService>

@property (retain, nonatomic) NSMutableDictionary *standingTimeTrack;
@property (nonatomic) double startTimeInterval;
@property (retain, nonatomic) AWERecordInspirationCategoryItem *categoryItem;
@property (nonatomic) BOOL currentIsTrackDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
