@class NSString, RTVVoipToastBody;

@interface RTVVoipToastCommandContent : JSONModel

@property (copy, nonatomic) NSString *callID;
@property (retain, nonatomic) RTVVoipToastBody *toastBody;

+ (id)keyMapper;
+ (id)contentWithCallID:(id)a0 toastBody:(id)a1;

- (void).cxx_destruct;

@end
