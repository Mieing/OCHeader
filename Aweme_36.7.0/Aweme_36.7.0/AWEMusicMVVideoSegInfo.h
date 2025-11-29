@class NSString;

@interface AWEMusicMVVideoSegInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (copy, nonatomic) NSString *fragmentID;
@property (copy, nonatomic) NSString *materialType;
@property (nonatomic) long long groupID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
