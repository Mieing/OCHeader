@class NSString;

@interface AWEECJumpToMallFinishConfigModel : MTLModel <MTLJSONSerializing, NSCopying>

@property (nonatomic) long long timeBegin;
@property (nonatomic) long long leadTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
