@class NSString;

@interface IESECBTMPageInfo : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *btm;
@property (retain, nonatomic) NSString *showId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
