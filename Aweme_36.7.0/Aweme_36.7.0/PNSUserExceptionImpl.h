@class NSString;

@interface PNSUserExceptionImpl : NSObject <PNSUserExceptionProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackUserExceptionWithType:(id)a0 backtracesArray:(id)a1 customParams:(id)a2 filters:(id)a3 callback:(id /* block */)a4;
- (void)trackUserExceptionWithType:(id)a0 title:(id)a1 subTitle:(id)a2 customParams:(id)a3 filters:(id)a4 callback:(id /* block */)a5;

@end
