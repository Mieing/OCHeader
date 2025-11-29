@class NSString, NSArray, NSDictionary, NSNumber;
@protocol Optional, RTVObserveRoomParticipant;

@interface RTVVoipObserveRoomInfo : JSONModel

@property (copy, nonatomic) NSString *roomID;
@property (retain, nonatomic) NSArray<RTVObserveRoomParticipant> *participants;
@property (retain, nonatomic) NSDictionary<Optional> *extra;
@property (nonatomic) long long roomType;
@property (nonatomic) long long status;
@property (retain, nonatomic) NSNumber *capacity;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (unsigned long long)interactType;
- (long long)voipType;
- (BOOL)isRoomTerminal;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
