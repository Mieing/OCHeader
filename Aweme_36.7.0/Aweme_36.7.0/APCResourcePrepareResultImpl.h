@class NSError, NSArray, NSString;

@interface APCResourcePrepareResultImpl : NSObject <APCResourcePrepareResult>

@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSArray *items;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithItems:(id)a0 error:(id)a1;
- (void).cxx_destruct;

@end
