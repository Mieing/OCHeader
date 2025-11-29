@class NSArray;

@interface IESLiveChatRoomInviteGuideConfig : NSObject

@property (nonatomic) unsigned long long scene;
@property (nonatomic) double avatarSideLength;
@property (nonatomic) struct CGSize { double width; double height; } sessionSize;
@property (retain, nonatomic) NSArray *widths;
@property (nonatomic) double fontSize;
@property (nonatomic) double labelHeight;
@property (retain, nonatomic) NSArray *colors;
@property (nonatomic) BOOL isSquareAudio;
@property (nonatomic) BOOL userNewLayout;

- (void).cxx_destruct;

@end
