@class NSDictionary;

@interface AWEBDTicketTrackControl : NSObject

@property (retain, nonatomic) NSDictionary *trackConfig;

+ (BOOL)canTrackWithEvent:(id)a0;
+ (void)setupBDTicketTrack;
+ (id)sharedInstance;

- (void).cxx_destruct;

@end
