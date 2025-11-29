@class NSMutableDictionary;

@interface IESLiveMultiRoomPreloadTracker : NSObject

@property (retain, nonatomic) NSMutableDictionary *params;
@property (copy, nonatomic) id /* block */ getTrackInfoCallback;

- (void)recordExtra:(id)a0;
- (void).cxx_destruct;
- (void)report;
- (id)init;

@end
