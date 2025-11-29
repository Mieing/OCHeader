@class NSString, ACCEditTagStickerHandler;

@interface ACCVideoEditTagStickerViewModel : NSObject <ACCEditTagStickerServiceProtocol>

@property (retain, nonatomic) ACCEditTagStickerHandler *editTagStickerHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fixPositionWithSafeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void).cxx_destruct;

@end
