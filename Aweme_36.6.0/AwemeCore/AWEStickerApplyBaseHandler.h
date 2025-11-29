@class NSString, AWEStickerApplyHandlerContainer;

@interface AWEStickerApplyBaseHandler : NSObject <AWEStickerApplyHandlerProtocol>

@property (weak, nonatomic) AWEStickerApplyHandlerContainer *container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
