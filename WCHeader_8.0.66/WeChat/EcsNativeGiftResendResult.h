@class NSString, NSNumber;

@interface EcsNativeGiftResendResult : NSObject

@property (copy, nonatomic) NSString *seqId;
@property (retain, nonatomic) NSNumber *errCode;
@property (retain, nonatomic) NSNumber *giftOrderId;

+ (id)makeWithSeqId:(id)a0 errCode:(id)a1 giftOrderId:(id)a2;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
