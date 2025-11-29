@class NSString, NSArray, AWEVideoPublishViewModel;

@interface AWEStudioComposerFlow : NSObject

@property (readonly, nonatomic) NSString *creationID;
@property (readonly, nonatomic) AWEVideoPublishViewModel *topPublishViewModel;
@property (readonly, nonatomic) NSArray *pages;

+ (void)p_dismissPages:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;

- (void)exitFlowAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithPages:(id)a0;

@end
