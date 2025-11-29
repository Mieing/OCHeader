@class NSString, AWEProfileEditSubmitContext, NSError, AWEProfileEditResponseToastBackInfo;

@interface AWEProfileEditSubmitParams : NSObject

@property (retain, nonatomic) AWEProfileEditSubmitContext *context;
@property (nonatomic) BOOL toastAndReturn;
@property (copy, nonatomic) NSString *statusMsg;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) long long toastBack;
@property (retain, nonatomic) AWEProfileEditResponseToastBackInfo *toastBackInfo;

- (void).cxx_destruct;

@end
