@class NSString;

@interface IESGCPDIContext : IESLiveDIContext <IESGCPDIContext>

@property (retain, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
