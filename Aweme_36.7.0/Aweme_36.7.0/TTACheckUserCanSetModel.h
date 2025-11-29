@class NSString;

@interface TTACheckUserCanSetModel : NSObject

@property (nonatomic) BOOL canSet;
@property (nonatomic) long long errorCode;
@property (copy, nonatomic) NSString *descriptionMsg;

+ (id)tta_modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
