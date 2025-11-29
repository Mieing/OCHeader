@class NSString;

@interface AWEDTOBackgroundVideoData : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *videoPath;
@property (nonatomic) double playedPercent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
