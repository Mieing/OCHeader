@class NSString;
@protocol AWEPostPageContext;

@interface AWEPostPageDynamicRecorderHashtags : NSObject <AWEPostPageExtraHashtags>

@property (weak, nonatomic) id<AWEPostPageContext> context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)publishViewModel;
- (id)extraHashtags;
- (void).cxx_destruct;

@end
