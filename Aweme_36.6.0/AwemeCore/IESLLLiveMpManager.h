@class NSString;

@interface IESLLLiveMpManager : HTSService <IESLLLiveMpManager>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)routerToMPWithSchema:(id)a0 parameter:(id)a1;
+ (id)joinParamsToBDPLogWithMPSchema:(id)a0 parameter:(id)a1;


@end
