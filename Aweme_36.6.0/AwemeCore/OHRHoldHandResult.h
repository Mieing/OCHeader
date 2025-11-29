@class NSDictionary, NSString;

@interface OHRHoldHandResult : NSObject <OHRHoldHandResult>

@property (nonatomic) long long hand;
@property (nonatomic) double confidence;
@property (retain, nonatomic) NSDictionary *inputParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
