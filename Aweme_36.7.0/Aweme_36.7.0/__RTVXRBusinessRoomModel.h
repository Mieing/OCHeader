@class NSString;

@interface __RTVXRBusinessRoomModel : NSObject <RTVBusinessRoomInterface>

@property (readonly, nonatomic) long long roomType;
@property (readonly, copy, nonatomic) NSString *roomID;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSessionController:(id)a0;
- (void).cxx_destruct;

@end
