@class NSString;

@interface AWEMusicMVEditInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long templateID;
@property (nonatomic) long long startTime;
@property (nonatomic) long long duration;
@property (nonatomic) double speed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
