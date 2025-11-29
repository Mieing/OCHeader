@interface IESIMGroupImpl.GroupParticipantTagConfig : NSObject <IESIMGroupParticipantTagConfigProtocol>

@property (nonatomic) double viewHeight;
@property (nonatomic) double leftAndRightSpacing;
@property (nonatomic) double internalSpacing;
@property (nonatomic) double fontSize;

+ (id)generateWithScene:(long long)a0;

- (id)init;

@end
