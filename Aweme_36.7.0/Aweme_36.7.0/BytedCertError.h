@class NSString, NSError;

@interface BytedCertError : NSObject

@property (nonatomic) long long errorCode;
@property (nonatomic) long long detailErrorCode;
@property (copy, nonatomic) NSString *errorMessage;
@property (copy, nonatomic) NSString *detailErrorMessage;
@property (retain, nonatomic) NSError *oriError;
@property (copy, nonatomic) NSString *requestUrl;

+ (id)trackErrorCodeForError:(id)a0;
+ (id)trackErrorMsgForError:(id)a0;

- (id)initWithType:(long long)a0 detailErrorCode:(long long)a1;
- (id)initWithType:(long long)a0 oriError:(id)a1;
- (id)initWithType:(long long)a0 errorMsg:(id)a1 oriError:(id)a2;
- (void).cxx_destruct;
- (id)description;
- (id)initWithType:(long long)a0;

@end
