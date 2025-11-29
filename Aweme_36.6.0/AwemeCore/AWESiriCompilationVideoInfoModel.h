@class NSNumber, NSString;

@interface AWESiriCompilationVideoInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *episode;
@property (copy, nonatomic) NSString *mixID;
@property (copy, nonatomic) NSString *mixName;
@property (retain, nonatomic) NSNumber *mixType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
