@class NSString, ACCNLEImageWrapper, UIView;
@protocol AWENewVideoCoverCommandDelegate, ACCStickerProtocol;

@interface AWENewVideoCoverCommand : NSObject <AWENewVideoCoverCommand>

@property (nonatomic) double timestamp;
@property (retain, nonatomic) ACCNLEImageWrapper *NLEImageWrapper;
@property (retain, nonatomic) UIView<ACCStickerProtocol> *stickerView;
@property (nonatomic) BOOL stickCommand;
@property (weak, nonatomic) id<AWENewVideoCoverCommandDelegate> delegate;
@property (copy, nonatomic) id /* block */ additionalRevert;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)realExecute;
- (void)realUnExecute;
- (void)unExecute;
- (id)realLayer;
- (void).cxx_destruct;
- (void)execute;

@end
