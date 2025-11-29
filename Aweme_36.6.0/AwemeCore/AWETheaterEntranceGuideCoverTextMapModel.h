@class AWETheaterEntranceGuideCoverTextModel;

@interface AWETheaterEntranceGuideCoverTextMapModel : AWEBaseApiModel

@property (retain, nonatomic) AWETheaterEntranceGuideCoverTextModel *appointment;
@property (retain, nonatomic) AWETheaterEntranceGuideCoverTextModel *collection;
@property (retain, nonatomic) AWETheaterEntranceGuideCoverTextModel *theaterChannel;

+ (id)collectionJSONTransformer;
+ (id)appointmentJSONTransformer;
+ (id)theaterChannelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
