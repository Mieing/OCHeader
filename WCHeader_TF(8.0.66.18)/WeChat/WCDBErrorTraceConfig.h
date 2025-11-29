@class NSSet, NSString;

@interface WCDBErrorTraceConfig : NSObject

@property (nonatomic) int errorCode;
@property (retain, nonatomic) NSSet *dbTag;
@property (retain, nonatomic) NSString *messageMatchReg;
@property (nonatomic) BOOL showTableUsage;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;

- (void).cxx_destruct;

@end
