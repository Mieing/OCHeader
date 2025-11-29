@class NSArray, NSString;
@protocol AEKEditorMaterial;

@interface AEKFilterStashesImpl : NSObject <AEKFilterStashes>

@property (retain, nonatomic) id<AEKEditorMaterial> material;
@property (retain, nonatomic) NSArray *filters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMaterial:(id)a0 filters:(id)a1;
- (void).cxx_destruct;

@end
