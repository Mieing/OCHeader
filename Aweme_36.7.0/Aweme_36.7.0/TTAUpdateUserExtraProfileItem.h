@class NSNumber, NSString;

@interface TTAUpdateUserExtraProfileItem : TTADataRespModel

@property (retain, nonatomic) NSNumber *gender;
@property (copy, nonatomic) NSString *birthday;
@property (copy, nonatomic) NSString *industry;
@property (copy, nonatomic) NSString *area;

- (void).cxx_destruct;

@end
