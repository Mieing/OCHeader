@class NSString, CJPayErrorButtonInfo;

@interface CJPaySmallChangeCheckResponse : CJPayBaseResponse

@property (copy, nonatomic) NSString *permissionUrl;
@property (copy, nonatomic) NSString *urlType;
@property (nonatomic) BOOL needJump;
@property (retain, nonatomic) CJPayErrorButtonInfo *buttonInfo;

+ (id)keyMapper;

- (void).cxx_destruct;
- (BOOL)isSuccess;

@end
