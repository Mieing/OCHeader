@class NSString, NSNumber;

@interface IESLiveInteractApplyPaidLinkParams : NSObject

@property (readonly, nonatomic) BOOL isPaid;
@property (copy, nonatomic) NSString *clickSource;
@property (nonatomic) BOOL isFromPaidLinkmic;
@property (retain, nonatomic) NSNumber *linkPaidCount;
@property (retain, nonatomic) NSNumber *linkLimitTime;
@property (retain, nonatomic) NSNumber *discountMode;
@property (retain, nonatomic) NSNumber *discountAmount;
@property (copy, nonatomic) NSString *discountText;

- (void).cxx_destruct;

@end
