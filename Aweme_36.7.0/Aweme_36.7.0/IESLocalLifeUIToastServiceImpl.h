@class NSString;

@interface IESLocalLifeUIToastServiceImpl : NSObject <IESLocalLifeUIToastService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instance;

- (id)buildToastStyle:(unsigned long long)a0 text:(id)a1 iconView:(id)a2;
- (void)showText:(id)a0;

@end
