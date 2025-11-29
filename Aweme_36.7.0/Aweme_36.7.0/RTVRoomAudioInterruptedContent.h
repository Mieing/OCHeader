@class NSString;

@interface RTVRoomAudioInterruptedContent : JSONModel <RTVXRRoomMessageContent>

@property (nonatomic) long long optionType;
@property (nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (long long)messageType;

- (long long)messageMethod;
- (long long)sendChannel;
- (id)initWithOptionType:(long long)a0 type:(long long)a1;

@end
