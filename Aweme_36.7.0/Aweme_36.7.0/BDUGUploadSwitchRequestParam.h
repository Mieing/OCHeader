@class NSString, BDUGPushNotice;

@interface BDUGUploadSwitchRequestParam : BDUGBaseRequestParam

@property (nonatomic) long long uploadSwitchType;
@property (copy, nonatomic) NSString *notice;
@property (retain, nonatomic) BDUGPushNotice *subdividedNotice;
@property (copy, nonatomic) NSString *outAppChangeStatus;
@property (copy, nonatomic) NSString *inAppChangeStatus;
@property (nonatomic) BOOL isBackground;

- (void).cxx_destruct;

@end
