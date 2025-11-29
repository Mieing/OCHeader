@class NSString, NSDictionary;

@interface LSListCellTrack : NSObject <LSListCellTrackProtocol>

@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *clickName;
@property (copy, nonatomic) NSDictionary *trackData;

+ (id)trackWithDisplayName:(id)a0 clickName:(id)a1 trackData:(id)a2;

- (id)initWithDisplayName:(id)a0 clickName:(id)a1 trackData:(id)a2;
- (void).cxx_destruct;

@end
