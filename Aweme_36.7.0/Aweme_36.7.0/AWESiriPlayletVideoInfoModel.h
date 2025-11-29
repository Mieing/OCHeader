@class NSNumber, NSString;

@interface AWESiriPlayletVideoInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *episode;
@property (copy, nonatomic) NSString *playLetID;
@property (copy, nonatomic) NSString *playLetName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
