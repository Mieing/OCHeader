@class NSArray, NSString;

@interface AWEIMShareCandidateReduceInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) double recommendThre;
@property (nonatomic) long long historyShareInsertMinDay;
@property (nonatomic) long long lowShareRelationValue;
@property (nonatomic) long long insertStartIndex;
@property (retain, nonatomic) NSArray *insertContactList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
