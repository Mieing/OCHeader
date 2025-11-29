@class AWEFormatSendMessageServiceImpl;

@interface AWEFormatInputComponent : AWEIMComponentBase

@property (retain, nonatomic) AWEFormatSendMessageServiceImpl *serviceImpl;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void).cxx_destruct;

@end
