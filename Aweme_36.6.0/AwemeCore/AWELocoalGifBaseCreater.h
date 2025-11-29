@class AWELocoalGifCreaterContext;

@interface AWELocoalGifBaseCreater : NSObject

@property (retain, nonatomic) AWELocoalGifCreaterContext *context;
@property (nonatomic) BOOL hasRequestedSticker;
@property (nonatomic) BOOL hasAlreadyCreateLocoalMsg;

- (void)requestGifSteakerWithParams:(id)a0 enableLocoalGifWhenTimeout:(BOOL)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end
