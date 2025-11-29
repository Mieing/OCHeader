@class NSString, GameJumpInfo;

@interface GameCenterMsgSourceInfo : NSObject

@property (retain, nonatomic) NSString *sourceName;
@property (nonatomic) BOOL sourceClickable;
@property (retain, nonatomic) GameJumpInfo *sourceJumpInfo;

- (void).cxx_destruct;

@end
