@class NSString;

@interface APCDTOTmpYuanDanConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL disableResourceAdd;
@property (nonatomic) BOOL autoDisplayEditorPreview;
@property (nonatomic) long long memoryType;
@property (nonatomic) BOOL disableAddVideo;
@property (nonatomic) BOOL displayRedPacket;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
