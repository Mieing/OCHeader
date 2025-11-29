@class NSString, ACCRecordAuthStatus;

@interface AWERecordAuthViewState : NSObject <FPUIState>

@property (retain, nonatomic) NSString *customTitle;
@property (retain, nonatomic) NSString *customMessage;
@property (retain, nonatomic) ACCRecordAuthStatus *authStatus;
@property (nonatomic) BOOL mustHaveMicScene;
@property (nonatomic) BOOL showDYCode;
@property (nonatomic) BOOL needBlur;

- (void).cxx_destruct;

@end
