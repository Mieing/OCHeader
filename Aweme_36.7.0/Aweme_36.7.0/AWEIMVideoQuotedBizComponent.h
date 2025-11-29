@class UIImage, NSString, AWEIMVideoMessageViewModel;

@interface AWEIMVideoQuotedBizComponent : AWEIMFlexComponent <AWEIMMessageQuoteDataAction>

@property (retain, nonatomic) AWEIMVideoMessageViewModel *originMessageVM;
@property (retain, nonatomic) UIImage *finalImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMounted:(id)a0;
- (void)didLoadFullOriginMessage:(id)a0 messageStatus:(int)a1;
- (void).cxx_destruct;

@end
