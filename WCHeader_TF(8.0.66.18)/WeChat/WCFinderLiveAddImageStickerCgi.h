@class NSMutableArray;

@interface WCFinderLiveAddImageStickerCgi : WCFinderLiveBaseCgi

@property (retain, nonatomic) NSMutableArray *stickers;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ failBlock;

- (id)initWithTaskId:(id)a0 stickers:(id)a1 successBlock:(id /* block */)a2 failBlock:(id /* block */)a3;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
