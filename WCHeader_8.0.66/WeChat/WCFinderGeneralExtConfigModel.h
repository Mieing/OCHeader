@class NSString, WCFinderExtPostPreCheckModel;

@interface WCFinderGeneralExtConfigModel : NSObject

@property (retain, nonatomic) WCFinderExtPostPreCheckModel *preCheckModel;
@property (nonatomic) unsigned long long extType;
@property (copy, nonatomic) NSString *extParams;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;

- (void).cxx_destruct;

@end
