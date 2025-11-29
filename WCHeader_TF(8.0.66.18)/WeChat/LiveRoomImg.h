@class NSString, LiveRoomImg_DynamicVoiceLiveImg;

@interface LiveRoomImg : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *voiceLiveImg;
@property (retain, nonatomic) LiveRoomImg_DynamicVoiceLiveImg *dynamicVoiceLiveImg;
@property (nonatomic) unsigned int imgType;
@property (nonatomic) unsigned int voiceLiveImgTs;

+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnTypeForWCDB;
+ (void)initialize;

- (id)archivedWCTValue;

@end
