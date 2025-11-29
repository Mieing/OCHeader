@class NSString;

@interface SECNetDataTrigger : NSObject <SECNetDetector>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldHandle:(id)a0;
- (id)tryDetect:(id)a0 withEvent:(id)a1;

@end
