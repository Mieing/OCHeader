@class BDCLogKnwItiLink, BDCLogKnwTopicLink;

@interface BDCLogKnwLink : NSObject

@property (readonly, nonatomic) BDCLogKnwItiLink *iti;
@property (readonly, nonatomic) BDCLogKnwTopicLink *topic;

@end
