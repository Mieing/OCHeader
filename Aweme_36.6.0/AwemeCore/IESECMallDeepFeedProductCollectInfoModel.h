@class NSNumber, NSString;

@interface IESECMallDeepFeedProductCollectInfoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isCollected;
@property (retain, nonatomic) NSNumber *collectCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
