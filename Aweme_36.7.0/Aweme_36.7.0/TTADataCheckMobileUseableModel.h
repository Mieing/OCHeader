@class NSString;

@interface TTADataCheckMobileUseableModel : TTADataRespModel

@property (nonatomic) BOOL isUnusable;
@property (nonatomic) BOOL isVerified;
@property (nonatomic) BOOL mnoSupport;
@property (copy, nonatomic) NSString *ticket;

+ (id)tta_modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
