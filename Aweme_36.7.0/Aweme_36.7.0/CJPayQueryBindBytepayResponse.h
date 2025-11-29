@class NSString, CJPayErrorButtonInfo;

@interface CJPayQueryBindBytepayResponse : CJPayBaseResponse

@property (nonatomic) BOOL isComplete;
@property (nonatomic) BOOL isLnyxURL;
@property (copy, nonatomic) NSString *redirectURL;
@property (retain, nonatomic) CJPayErrorButtonInfo *buttonInfo;

+ (id)keyMapper;

- (BOOL)propertyIsOptional:(id)a0;
- (void).cxx_destruct;

@end
