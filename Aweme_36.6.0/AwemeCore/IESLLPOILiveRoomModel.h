@class NSString;

@interface IESLLPOILiveRoomModel : NSObject

@property (copy, nonatomic) NSString *poiID;
@property (copy, nonatomic) NSString *roomID;
@property (copy, nonatomic) NSString *anchorID;
@property (copy, nonatomic) NSString *liveRoomEnterFrom;
@property (nonatomic) unsigned long long bindState;

- (void)setPOI:(id)a0;
- (void).cxx_destruct;

@end
