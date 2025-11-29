@class NSString, NSArray;

@interface IESPrefetchProjectTemplate : NSObject <IESPrefetchConfigTemplate>

@property (copy, nonatomic) NSString *project;
@property (copy, nonatomic) NSString *version;
@property (retain, nonatomic) NSArray *children;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)process:(id)a0;
- (void).cxx_destruct;
- (id)jsonRepresentation;

@end
