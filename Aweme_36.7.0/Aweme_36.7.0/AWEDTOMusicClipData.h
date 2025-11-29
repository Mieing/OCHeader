@class NSString;

@interface AWEDTOMusicClipData : MTLModel <MTLJSONSerializing>

@property (nonatomic) double duration;
@property (nonatomic) double repeatCount;
@property (nonatomic) BOOL disable;
@property (nonatomic) double start;
@property (nonatomic) double attach;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
