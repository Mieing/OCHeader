@class NSString;

@interface OnUpdateCallStateWithTextPara : NSObject

@property (retain, nonatomic) NSString *stateText;
@property (nonatomic) BOOL isAccepted;
@property (nonatomic) BOOL isEnd;
@property (nonatomic) BOOL isErr;
@property (nonatomic) unsigned int errorlevel;
@property (retain, nonatomic) NSString *errTitle;
@property (nonatomic) BOOL isShowChargeAlert;
@property (nonatomic) BOOL isShowFreeActicityNotSupport;
@property (nonatomic) BOOL isMinmizeMode;

- (void).cxx_destruct;

@end
