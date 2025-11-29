@class NSString;

@interface WCFinderLiveAnchorFaceTrackStruct : NSObject

@property (retain, nonatomic) NSString *finderUserName;
@property (nonatomic) unsigned long long actionTS;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSString *finderFeedId;
@property (nonatomic) unsigned long long actionType;
@property (retain, nonatomic) NSString *actionResult;

- (id)toReport;
- (void).cxx_destruct;

@end
