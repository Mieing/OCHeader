@class NSString, NSNumber;

@interface AWEAdPlayletInfoDataModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *playletId;
@property (copy, nonatomic) NSNumber *currentEpisode;
@property (copy, nonatomic) NSNumber *nextEpisode;
@property (copy, nonatomic) NSNumber *adContentType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
