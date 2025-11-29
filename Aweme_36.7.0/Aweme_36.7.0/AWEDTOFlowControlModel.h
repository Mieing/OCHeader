@class NSString;

@interface AWEDTOFlowControlModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long step;
@property (nonatomic) long long videoRecordButtonType;
@property (nonatomic) long long modeId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
