@class NSString, NSNumber;

@interface AWELVideoPlayControlInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *awemeId;
@property (copy, nonatomic) NSString *albumId;
@property (copy, nonatomic) NSString *episodeId;
@property (nonatomic) BOOL isPaused;
@property (retain, nonatomic) NSNumber *speed;
@property (retain, nonatomic) NSNumber *position;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
