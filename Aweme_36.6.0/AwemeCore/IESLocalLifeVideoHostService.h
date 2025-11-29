@class NSString;

@interface IESLocalLifeVideoHostService : HTSService <IESLocalLifeVideoHostService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)cancelForGroup:(id)a0;
+ (void)prefetchWithURLString:(id)a0 size:(unsigned long long)a1 group:(id)a2;


@end
