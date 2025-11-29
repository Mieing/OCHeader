@class NSString;

@interface CJPayBioCheckSateModel : NSObject

@property (nonatomic) BOOL isShow;
@property (nonatomic) BOOL isOPen;
@property (copy, nonatomic) NSString *msg;
@property (copy, nonatomic) NSString *bioType;
@property (nonatomic) long long style;

- (id)toJson;
- (void).cxx_destruct;

@end
