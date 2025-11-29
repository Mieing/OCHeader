@class NSString;

@interface ACCDuetLayoutFrameModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long type;
@property (nonatomic) double x1;
@property (nonatomic) double y1;
@property (nonatomic) double x2;
@property (nonatomic) double y2;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportDuetLayoutFrameList;
+ (id)configDuetLayoutFrameModelWithString:(id)a0;
+ (id)JSONKeyPathsByPropertyKey;


@end
