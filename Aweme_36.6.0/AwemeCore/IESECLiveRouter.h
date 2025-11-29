@class NSString;

@interface IESECLiveRouter : NSObject <IESECLiveRouter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)openSchema:(id)a0;
+ (BOOL)openSchema:(id)a0 fromViewController:(id)a1;
+ (BOOL)canOpenSchema:(id)a0;

- (BOOL)openSchema:(id)a0;
- (BOOL)openSchema:(id)a0 fromViewController:(id)a1;
- (BOOL)canOpenSchema:(id)a0;

@end
