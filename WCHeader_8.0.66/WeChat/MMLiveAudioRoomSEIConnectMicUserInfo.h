@class NSString;

@interface MMLiveAudioRoomSEIConnectMicUserInfo : NSObject

@property (retain, nonatomic) NSString *uId;
@property (nonatomic) unsigned int us;
@property (nonatomic) unsigned long long i;

- (void)updateWithMicUserInfo:(id)a0;
- (BOOL)isTalking;
- (BOOL)isOtherAnchor;
- (BOOL)isInOtherRoom;
- (BOOL)isMicMutedByAnchor;
- (void).cxx_destruct;

@end
