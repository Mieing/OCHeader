@class NSString, NSArray, ACCDraftURS;

@interface AWEDTOShootPic2VideoInfo : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) ACCDraftURS *packageURS;
@property (retain, nonatomic) ACCDraftURS *iconURS;
@property (copy, nonatomic) NSString *propId;
@property (copy, nonatomic) NSArray *stickerText;
@property (copy, nonatomic) NSArray *arText;
@property (copy, nonatomic) NSString *welfareActivityId;
@property (copy, nonatomic) NSString *propExportTaskId;
@property (copy, nonatomic) NSString *customPropExportPath;
@property (copy, nonatomic) NSString *customPropIconExportPath;
@property (nonatomic) double stickerDefaultCoverFrameTimestamp;
@property (copy, nonatomic) NSString *recordUuid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)acc_JSONKeyPathsByPropertyKey;
+ (void)_aweLazyRegisterLoad_Draft;
+ (id)currentCustomPropExportURSJSONTransformer;
+ (id)currentCustomPropIconExportURSJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
