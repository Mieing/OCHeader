@class NSArray, NSDictionary, NSString, NSError, AWEIMStickerResourceResponseModel, AWEIMCustomStickerCache;

@interface AWEIMCustomStickerDataContext : NSObject <AWEIMTaskPipelineContext>

@property (nonatomic) unsigned long long operation;
@property (nonatomic) long long offset;
@property (readonly, nonatomic) BOOL isInit;
@property (readonly, nonatomic) BOOL isLoadMore;
@property (weak, nonatomic) AWEIMCustomStickerCache *cache;
@property (nonatomic) BOOL isErrorOccurred;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSDictionary *headerFieldContext;
@property (retain, nonatomic) AWEIMStickerResourceResponseModel *response;
@property (retain, nonatomic) NSArray *stickers;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly, nonatomic) BOOL isCancelled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)cancel;

@end
