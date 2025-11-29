@protocol AppStandardContentExternalLoadImageDelegate;

@interface AppStandardContentExternalLoadImageDelegateWrap : NSObject

@property (weak, nonatomic) id<AppStandardContentExternalLoadImageDelegate> delegate;
@property (nonatomic) BOOL didLoadDone;
@property (nonatomic) BOOL didLoadFail;

- (void).cxx_destruct;

@end
