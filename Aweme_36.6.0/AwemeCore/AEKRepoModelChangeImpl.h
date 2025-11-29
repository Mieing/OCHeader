@class NSString, NSArray;

@interface AEKRepoModelChangeImpl : NSObject <AEKRepoModelChange>

@property (copy, nonatomic) NSString *changeType;
@property (copy, nonatomic) NSArray *changeProps;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithChangeType:(id)a0 changes:(id)a1;
- (void).cxx_destruct;

@end
