@class NSString;

@interface SECNetURLReferProtector : NSObject <SECNetProtector>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)protect:(id)a0;
- (id)protect:(id)a0 withEvent:(id)a1;
- (BOOL)shouldHandle:(id)a0;

@end
