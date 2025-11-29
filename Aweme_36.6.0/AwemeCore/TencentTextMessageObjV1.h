@class NSString;

@interface TencentTextMessageObjV1 : TencentBaseMessageObj

@property (copy, nonatomic) NSString *sText;

- (void).cxx_destruct;
- (BOOL)isValid;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithText:(id)a0;
- (void)dealloc;

@end
