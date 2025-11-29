@class NSArray, NSString;

@interface AEKTrackBindingStashesImpl : NSObject <AEKTrackBindingStashes>

@property (retain, nonatomic) NSArray *strategyArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStrategyArray:(id)a0;
- (void).cxx_destruct;

@end
