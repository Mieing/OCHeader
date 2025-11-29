@class NSString, NSDictionary, IESLiveInteractApplyPaidLinkParams, NSNumber;

@interface IESLiveInteractApplyParams : NSObject

@property (nonatomic) long long applyMode;
@property (nonatomic) unsigned long long applySource;
@property (copy, nonatomic) NSString *applyReason;
@property (retain, nonatomic) NSNumber *applyPosition;
@property (nonatomic) BOOL isApplyAfterFollow;
@property (retain, nonatomic) NSNumber *applyMutedState;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (copy, nonatomic) NSString *requestPage;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (retain, nonatomic) IESLiveInteractApplyPaidLinkParams *paidLinkParams;

- (void).cxx_destruct;

@end
