@class NSString;

@interface APCDTOArea : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long type;
@property (nonatomic) double centerX;
@property (nonatomic) double centerY;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) long long index;
@property (nonatomic) double rotation;
@property (nonatomic) double scale;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (copy, nonatomic) NSString *attr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
