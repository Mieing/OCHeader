@class NSNumber, NSString;

@interface AWEMatchInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *begin;
@property (retain, nonatomic) NSNumber *end;
@property (copy, nonatomic) NSString *link;
@property (copy, nonatomic) NSString *query;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
