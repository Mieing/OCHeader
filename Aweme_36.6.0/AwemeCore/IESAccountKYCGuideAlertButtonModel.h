@class NSString, NSDictionary;

@interface IESAccountKYCGuideAlertButtonModel : NSObject

@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long operateType;
@property (retain, nonatomic) NSDictionary *operateParams;
@property (nonatomic) long long style;

- (BOOL)setupButtonModel:(id)a0;
- (long long)operateType:(id)a0;
- (long long)buttonStyle:(id)a0;
- (void).cxx_destruct;
- (id)initWithInfo:(id)a0;

@end
