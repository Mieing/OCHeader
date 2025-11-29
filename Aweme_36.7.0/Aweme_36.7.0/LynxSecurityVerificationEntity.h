@class NSString, LynxView, NSData;

@interface LynxSecurityVerificationEntity : NSObject

@property (weak, nonatomic) LynxView *lynxView;
@property (copy, nonatomic) NSString *url;
@property (nonatomic) BOOL verified;
@property (copy, nonatomic) NSString *errorMsg;
@property (nonatomic) long long errorCode;
@property (nonatomic) unsigned long long signId;
@property (copy, nonatomic) NSString *extraConfig;
@property (retain, nonatomic) NSData *originTasm;
@property (nonatomic) long long tasmType;

- (void).cxx_destruct;

@end
