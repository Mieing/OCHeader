@class NSString, NSNumber;

@interface IESECLiveGoodsReplayProductIndexItem : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *promotionID;
@property (retain, nonatomic) NSNumber *index;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
