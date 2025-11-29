@class NSString;

@interface BDECRabbiFlyErrorView : UIView <BDECRabbiFlyIErrorView>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setOnClickRetryBlock:(id /* block */)a0;

@end
