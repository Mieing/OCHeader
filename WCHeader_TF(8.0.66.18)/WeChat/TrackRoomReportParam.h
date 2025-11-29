@class NSString;

@interface TrackRoomReportParam : NSObject

@property (nonatomic) long long type;
@property (nonatomic) long long code;
@property (retain, nonatomic) NSString *roomId;
@property (retain, nonatomic) NSString *uniqueRoomId;
@property (nonatomic) BOOL isInitiator;
@property (nonatomic) long long roomType;

- (void).cxx_destruct;

@end
