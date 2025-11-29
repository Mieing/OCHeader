@class NSString, AWELiveStreamExtraInfoModel;

@interface AWELiveStreamURL : AWEBaseApiModel

@property (retain, nonatomic) NSString *streamData;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *rtmpURL;
@property (retain, nonatomic) AWELiveStreamExtraInfoModel *extra;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
