@class NSString, NSArray;

@interface AWELifeShelfCardListItemCardDataDrawTicketModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *drawTicketParams;
@property (copy, nonatomic) NSArray *trackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
