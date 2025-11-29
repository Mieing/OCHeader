@class NSString;

@interface IESECYataConfirmImpl : NSObject <YataConfirmDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)confirmDialogWithFields:(id)a0 confirmCallback:(id /* block */)a1;

@end
