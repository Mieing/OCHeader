@class NSString;

@interface WAUdrProxy : NSObject <IWAUdrService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getResourcePathWithProjectId:(id)a0 name:(id)a1;


@end
