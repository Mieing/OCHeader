@class NSNumber, NSString;

@interface IESGCPGcpLoadPerfLoadParamModel : IESLiveBridgeModel

@property (nonatomic) long long loadType;
@property (retain, nonatomic) NSNumber *time;
@property (copy, nonatomic) NSString *trackID;
@property (nonatomic) BOOL isCustom;
@property (copy, nonatomic) NSString *name;

+ (id)modelCustomPropertyMapper;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (void).cxx_destruct;

@end
