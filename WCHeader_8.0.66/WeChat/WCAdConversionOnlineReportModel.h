@class NSString, NSMutableArray;

@interface WCAdConversionOnlineReportModel : NSObject

@property (retain, nonatomic) NSString *pkg;
@property (nonatomic) int ct;
@property (nonatomic) int os;
@property (nonatomic) int sdkSt;
@property (retain, nonatomic) NSString *av;
@property (retain, nonatomic) NSString *jsBundleVersion;
@property (retain, nonatomic) NSMutableArray *events;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
