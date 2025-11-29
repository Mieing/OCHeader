@interface IESLiveStreamPlayerFactory : NSObject

+ (id)createWithPlayer:(id)a0 roomModel:(id)a1 delegate:(id)a2 enterRoomTypeString:(id)a3 callTrace:(id)a4 diContext:(id)a5;
+ (id)createWithRoomModel:(id)a0 delegate:(id)a1 enterRoomTypeString:(id)a2 callTrace:(id)a3 diContext:(id)a4;
+ (BOOL)enablePluginPlayer;

@end
