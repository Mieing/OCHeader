@class NSString;

@interface AWEDTORecordSegmentStickerModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *stickerId;
@property (copy, nonatomic) NSString *stickerType;
@property (nonatomic) double stickerDefaultCoverFrameTimestamp;
@property (copy, nonatomic) NSString *aigcExtraInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
