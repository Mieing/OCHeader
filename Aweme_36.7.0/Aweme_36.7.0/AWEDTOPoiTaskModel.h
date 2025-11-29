@class NSString;

@interface AWEDTOPoiTaskModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *taskId;
@property (nonatomic) long long taskType;
@property (copy, nonatomic) NSString *taskName;
@property (copy, nonatomic) NSString *taskOrderId;
@property (copy, nonatomic) NSString *taskExtra;
@property (copy, nonatomic) NSString *trackDict;
@property (copy, nonatomic) NSString *taskOriginInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
