@class NSString, IESECURLModel;

@interface IESECReplayInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *replayUrl;
@property (copy, nonatomic) NSString *replayText;
@property (retain, nonatomic) IESECURLModel *replayIcon;
@property (nonatomic) BOOL hitNewReplayStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
