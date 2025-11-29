@class NSString, IESECURLModel;

@interface IESECWinVideoInfo : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECURLModel *videoCover;
@property (retain, nonatomic) IESECURLModel *videoPlayAddr;
@property (nonatomic) long long videoDuration;
@property (copy, nonatomic) NSString *contentTitle;
@property (nonatomic) double cuttingRatio;
@property (nonatomic) double maxPlayDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
