@class NSString;

@interface BDPValidSchemaCommonReponseData : NSObject

@property (nonatomic) long long err_no;
@property (copy, nonatomic) NSString *err_tips;
@property (nonatomic) long long result;
@property (nonatomic) long long scene_result;

- (void).cxx_destruct;

@end
