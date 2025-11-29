@class NSString;

@interface AWEIMCodeGenLiveFansClubIconConfigWithSizeModel : AWEBaseDataModel <WCTColumnCoding>

@property (nonatomic) long long scene;
@property (copy, nonatomic) NSString *iconUrl;
@property (nonatomic) long long height;
@property (nonatomic) long long width;

+ (int)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (id)JSONKeyPathsByPropertyKey;

- (id)archivedWCTValue;
- (void).cxx_destruct;

@end
