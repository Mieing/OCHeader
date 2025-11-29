@class NSString;

@interface AWETrendCheckTrackModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *propId;
@property (copy, nonatomic) NSString *musicId;
@property (copy, nonatomic) NSString *templateId;
@property (copy, nonatomic) NSString *duetId;
@property (copy, nonatomic) NSString *flashMobId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
