@class NSString;
@protocol Optional;

@interface RTVObserveRoomParticipant : JSONModel

@property (copy, nonatomic) NSString *secUID;
@property (copy, nonatomic) NSString<Optional> *imUID;
@property (copy, nonatomic) NSString<Optional> *uid;

+ (id)keyMapper;

- (void).cxx_destruct;

@end
