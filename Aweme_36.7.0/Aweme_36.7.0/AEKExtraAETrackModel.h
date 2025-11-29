@class NSArray, NSString;

@interface AEKExtraAETrackModel : NSObject <AEKExtraDataRepositoryProperty>

@property (copy, nonatomic) NSArray *sectionModels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)diffChangesWithOrigin:(id)a0;
- (id)buildJsonString;
- (id)diffChangesWithOrigin:(id)a0 type:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)initWithJsonString:(id)a0;

@end
