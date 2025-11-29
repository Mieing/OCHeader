@class NSString;

@interface AWEIMShareCandidateReduceInsertContactDetail : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *type;
@property (nonatomic) long long limit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
