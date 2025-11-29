@class NSString;

@interface IESLiveStreamPlayerLayoutContentFrame : MTLModel <MTLJSONSerializing>

@property (nonatomic) double x;
@property (nonatomic) double y;
@property (nonatomic) double w;
@property (nonatomic) double h;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
