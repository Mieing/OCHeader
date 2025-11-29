@class NSString;

@interface TrackRoomReportParam : NSObject

@property (nonatomic) long long type;
@property (nonatomic) long long code;
@property (retain, nonatomic) NSString *roomId;
@property (nonatomic) BOOL isInitiator;
@property (nonatomic) long long roomType;
@property (retain, nonatomic) NSString *uniqueRoomId;
@property (nonatomic) long long stayDuration;
@property (nonatomic) long long roomDuration;
@property (nonatomic) long long onlineUserCount;
@property (nonatomic) BOOL isRoomCreate;
@property (nonatomic) BOOL isRoomDestroy;

- (id)init;
- (void).cxx_destruct;

@end
