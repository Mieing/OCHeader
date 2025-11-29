@class NSString, AWEBinding, UIView;
@protocol ACCStickerServiceProtocol, IESServiceProvider;

@interface ACCStickerContainerSnapServiceImpl : NSObject <ACCStickerContainerSnapServiceProtocol>

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (retain, nonatomic) AWEBinding *addSnapViewSingal;
@property (retain, nonatomic) UIView *instanceStickerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)snapStickerContainerViewImage:(id)a0;

@end
