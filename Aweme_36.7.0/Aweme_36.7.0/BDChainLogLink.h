@class BDCLogKnwLink, BDCLogSearchLink, NSString;

@interface BDChainLogLink : NSObject

@property (class, readonly, nonatomic) BDCLogSearchLink *search;
@property (class, readonly, nonatomic) BDCLogKnwLink *knw;

@property (copy, nonatomic) NSString *rawValue;

- (void).cxx_destruct;
- (id)initWithRawValue:(id)a0;

@end
