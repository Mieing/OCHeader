@class NSString, IESECURLModel;

@interface IESECWinReplayVideoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECURLModel *playaddr;
@property (retain, nonatomic) IESECURLModel *cover;
@property (copy, nonatomic) NSString *jumpURL;
@property (nonatomic) double cuttingRatio;
@property (nonatomic) long long maxPlayDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
