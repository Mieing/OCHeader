@class NSString;

@interface HMDOTSpanViewData : NSObject <HMDOTSpanMovinglineDataProtocol>

@property (copy, nonatomic) NSString *btm;
@property (nonatomic) unsigned long long status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)generateMovinglineData;
- (void).cxx_destruct;

@end
