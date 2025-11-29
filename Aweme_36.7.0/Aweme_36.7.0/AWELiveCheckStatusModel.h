@class NSString, NSDictionary, NSError, NSNumber;

@interface AWELiveCheckStatusModel : NSObject

@property (nonatomic) BOOL canDirectEnter;
@property (nonatomic) long long roomStatus;
@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) NSString *logID;
@property (copy, nonatomic) NSString *filterReason;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) long long ntpDiffTime;
@property (retain, nonatomic) NSString *originRoomData;
@property (retain, nonatomic) NSDictionary *originRoomDict;
@property (copy, nonatomic) NSString *msg;

- (void).cxx_destruct;

@end
