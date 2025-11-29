@class NSString, NSArray;

@interface IESLatchPageTemplate : NSObject <IESPrefetchConfigTemplate>

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *version;
@property (nonatomic) long long minSdkVersion;
@property (retain, nonatomic) NSArray *children;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)process:(id)a0;
- (void).cxx_destruct;
- (id)jsonRepresentation;

@end
