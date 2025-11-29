@class NSString;

@interface IESLLLiveLogManager : NSObject <IESLLLiveLogManagerProtocol>

@property (copy, nonatomic) NSString *roomId;
@property (copy, nonatomic) NSString *roomTag;
@property (nonatomic) unsigned long long order;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)updateRoomId:(id)a0 roomPosition:(unsigned long long)a1;
+ (void)log:(id)a0 params:(id)a1;
+ (void)enterRoomWithRoomId:(id)a0 roomPosition:(unsigned long long)a1;
+ (void)exitRoom;
+ (BOOL)enable;
+ (void)logFormat:(id)a0;

- (void)p_log:(id)a0;
- (void).cxx_destruct;

@end
