@interface HTSLiveRoomBasisData : IESLivePBBaseMessage

@property (nonatomic) long long nextPing;
@property (nonatomic) BOOL isCustomizeAudioRoom;
@property (nonatomic) long long needRequestLuckybox;
@property (nonatomic) long long secretRoom;
@property (nonatomic) long long foreignUserRoom;

+ (id)descriptor;

@end
