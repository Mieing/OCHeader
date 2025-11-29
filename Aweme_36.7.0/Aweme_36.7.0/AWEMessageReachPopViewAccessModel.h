@class NSString;
@protocol AWEPzComponentProtocol, AWEAlertContextTrackProtocol;

@interface AWEMessageReachPopViewAccessModel : NSObject

@property (retain, nonatomic) id<AWEPzComponentProtocol> pzComponent;
@property (retain, nonatomic) NSString *locs;
@property (retain, nonatomic) NSString *trigger;
@property (retain, nonatomic) NSString *taskID;
@property (retain, nonatomic) id<AWEAlertContextTrackProtocol> alertContext;

- (void).cxx_destruct;

@end
