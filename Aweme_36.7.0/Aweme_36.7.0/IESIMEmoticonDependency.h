@class NSString, IESIMEmoticonConfig;

@interface IESIMEmoticonDependency : HTSService <IESIMEmoticonDependency>

@property (retain, nonatomic) IESIMEmoticonConfig *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
