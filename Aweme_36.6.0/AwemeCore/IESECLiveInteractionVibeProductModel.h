@class NSString, IESECLiveImageURLModel;

@interface IESECLiveInteractionVibeProductModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL showIndex;
@property (nonatomic) long long index;
@property (retain, nonatomic) IESECLiveImageURLModel *cover;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
