@class NSString;

@interface RTVRoomKefuGuideContent : JSONModel <RTVXRRoomMessageContent>

@property (retain, nonatomic) NSString *message;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (long long)messageType;

- (long long)messageMethod;
- (long long)sendChannel;
- (void).cxx_destruct;

@end
