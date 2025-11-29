@class NSString;

@interface RTVVoipRTMCommand : JSONModel <RTVXRRoomMessageContent>

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *roomID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)messageType;

@end
