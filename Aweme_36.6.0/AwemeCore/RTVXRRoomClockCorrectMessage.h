@class NSString;

@interface RTVXRRoomClockCorrectMessage : JSONModel <RTVXRRoomMessageContent>

@property (nonatomic) long long subMessageType;
@property (nonatomic) long long requesterLocalTime;
@property (nonatomic) long long replierLocalTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyMapper;
+ (long long)messageType;
+ (id)requestMessage;

- (long long)messageMethod;
- (long long)sendChannel;
- (id)initWithRequest:(id)a0;
- (id)init;
- (id)replyMessage;

@end
