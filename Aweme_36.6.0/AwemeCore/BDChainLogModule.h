@class BDCLogSearchModule, BDCLogDtcModule, NSString, BDCLogKnwModule;

@interface BDChainLogModule : NSObject

@property (class, readonly, nonatomic) BDCLogSearchModule *search;
@property (class, readonly, nonatomic) BDCLogDtcModule *dtc;
@property (class, readonly, nonatomic) BDCLogKnwModule *knw;

@property (copy, nonatomic) NSString *rawValue;

- (void).cxx_destruct;
- (id)initWithRawValue:(id)a0;

@end
