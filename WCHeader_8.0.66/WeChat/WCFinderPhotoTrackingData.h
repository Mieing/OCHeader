@class NSString, WCFinderFeedContentVM, WCFinderMediaInfo;

@interface WCFinderPhotoTrackingData : NSObject

@property (copy, nonatomic) NSString *trackingKey;
@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (retain, nonatomic) WCFinderMediaInfo *mediaInfo;
@property (nonatomic) double photoReadyTime;
@property (nonatomic) double exposeStartTime;
@property (nonatomic) BOOL firstExpose;
@property (nonatomic) BOOL isExposing;
@property (nonatomic) long long useType;

- (id)initWithMediaInfo:(id)a0 contentVM:(id)a1 useType:(long long)a2;
- (void).cxx_destruct;

@end
