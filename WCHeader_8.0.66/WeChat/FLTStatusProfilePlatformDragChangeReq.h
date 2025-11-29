@class NSString;

@interface FLTStatusProfilePlatformDragChangeReq : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *profileKey;
@property (nonatomic) double dragUpOffsetY;
@property (nonatomic) double dragDownOffsetY;
@property (nonatomic) double dragDownMaxOffsetY;
@property (nonatomic) double topPlaceholderHeight;

+ (void)initialize;

@end
