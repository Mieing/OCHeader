@class NSString;

@interface IESECSKUSpecsNodeSpecItem : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *specItemID;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *price;
@property (retain, nonatomic) NSString *icon;
@property (retain, nonatomic) NSString *smallPic;
@property (retain, nonatomic) NSString *bigPic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
