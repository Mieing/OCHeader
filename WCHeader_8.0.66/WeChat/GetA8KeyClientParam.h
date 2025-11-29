@class NSString;

@interface GetA8KeyClientParam : WXPBGeneratedMessage

@property (nonatomic) unsigned long long supportBitset;
@property (nonatomic) unsigned int pageViewType;
@property (nonatomic) unsigned int previewSwitchState;
@property (nonatomic) unsigned int userModifiedPreviewSwitch;
@property (nonatomic) unsigned int initRequestId;
@property (nonatomic) unsigned int weappMsgScene;
@property (retain, nonatomic) NSString *weappUsername;
@property (nonatomic) unsigned int weappScene;
@property (retain, nonatomic) NSString *weappSceneNote;
@property (retain, nonatomic) NSString *lastSessionName;
@property (nonatomic) long long lastSessionInterval;
@property (retain, nonatomic) NSString *liteappId;

+ (void)initialize;

@end
