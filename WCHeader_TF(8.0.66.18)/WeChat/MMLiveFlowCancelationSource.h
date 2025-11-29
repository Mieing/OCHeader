@class MMLiveFlowCancelationToken, MMLiveFlowCancelationStatus, NSString;

@interface MMLiveFlowCancelationSource : NSObject

@property (retain, nonatomic) MMLiveFlowCancelationStatus *cancelationStatus;
@property (retain, nonatomic) MMLiveFlowCancelationToken *token;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL cancelationRequested;

- (id)init;
- (void)cancel;
- (void).cxx_destruct;

@end
