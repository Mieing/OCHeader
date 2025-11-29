@class NSString;

@interface IESLivePipelineInjection : NSObject <IESLivePipelineInjectionProtocol>

@property (retain, nonatomic) NSString *injectionName;
@property (retain, nonatomic) NSString *stage;
@property (retain, nonatomic) NSString *moduleName;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long scope;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
