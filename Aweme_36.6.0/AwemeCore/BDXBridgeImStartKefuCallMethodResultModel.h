@class NSString;

@interface BDXBridgeImStartKefuCallMethodResultModel : BDXBridgeModel

@property (copy, nonatomic) NSString *room_id;
@property (copy, nonatomic) NSString *voip_room_id;
@property (copy, nonatomic) NSString *reason;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
