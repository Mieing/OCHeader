@class BDCLogKnwItiModule, BDCLogKnwTopicModule, BDCLogKnwItcModule;

@interface BDCLogKnwModule : NSObject

@property (readonly, nonatomic) BDCLogKnwItcModule *itc;
@property (readonly, nonatomic) BDCLogKnwItiModule *iti;
@property (readonly, nonatomic) BDCLogKnwTopicModule *topic;

@end
