@class NSString;

@interface IESECWinAuthorGuideInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *amount;
@property (copy, nonatomic) NSString *unit;
@property (copy, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
