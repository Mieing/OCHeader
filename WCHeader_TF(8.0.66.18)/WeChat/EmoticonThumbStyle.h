@class NSString;
@protocol EmoticonThumbStyleDelegate;

@interface EmoticonThumbStyle : ImageStyle

@property (weak, nonatomic) id<EmoticonThumbStyleDelegate> delegate;
@property (nonatomic) BOOL isLoadSuccess;
@property (nonatomic) BOOL isFirstLoad;
@property (nonatomic) BOOL isLoading;
@property (copy, nonatomic) id /* block */ loadFinishCallback;
@property (retain, nonatomic) NSString *md5;

- (id)init;
- (void)drawInContext:(struct CGContext { } *)a0;
- (void)asyncLoadWebImageWithCompletion:(id /* block */)a0;
- (void)onLoadedThumbImageWithMd5:(id)a0 andPath:(id)a1;
- (BOOL)needAsyncLoadWebImage;
- (void)onLoadImageFail;
- (BOOL)onClickAtImageStyleShouldResponse;
- (id)imageLoadingConfig:(BOOL)a0;
- (id)nsImgSrc;
- (void).cxx_destruct;

@end
