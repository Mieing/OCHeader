@class NSString;

@interface IESLiveMusicBeatModel : NSObject

@property (retain, nonatomic) NSString *senderUid;
@property (retain, nonatomic) NSString *uid;
@property (nonatomic) int aedState;
@property (nonatomic) float beat;
@property (nonatomic) unsigned char type;

- (void).cxx_destruct;

@end
