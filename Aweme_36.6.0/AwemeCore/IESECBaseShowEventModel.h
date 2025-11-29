@class NSString, NSDictionary;

@interface IESECBaseShowEventModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) NSDictionary *trackExtraParams;
@property (copy, nonatomic) NSString *eventId;
@property (copy, nonatomic) NSString *btmID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
