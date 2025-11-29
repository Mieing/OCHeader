@class NSArray, NSError, NSString;

@interface MiniComposerFinishResultImpl : NSObject <AWEStudioComposerFinishResult>

@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithItems:(id)a0 error:(id)a1;
- (void).cxx_destruct;

@end
