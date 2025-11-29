@class NSString;

@interface BTDALCustomLabel : NSObject <NSCoding>

@property (copy, nonatomic) NSString *openUrlAppLabel;
@property (copy, nonatomic) NSString *openUrlAppBackLabel;
@property (copy, nonatomic) NSString *openAppback;
@property (copy, nonatomic) NSString *successLabel;
@property (copy, nonatomic) NSString *failLabel;
@property (copy, nonatomic) NSString *wechatOpenLabel;
@property (copy, nonatomic) NSString *wechatSuccessLabel;
@property (copy, nonatomic) NSString *wechatFailLabel;

- (void)setDefaltValue;
- (void).cxx_destruct;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
