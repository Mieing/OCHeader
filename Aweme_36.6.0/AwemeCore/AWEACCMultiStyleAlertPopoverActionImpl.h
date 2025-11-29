@class UIImage, NSString;

@interface AWEACCMultiStyleAlertPopoverActionImpl : AWEACCMultiStyleAlertTemplateActionImpl <ACCMultiStyleAlertPopoverActionProtocol>

@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) unsigned long long actionStyle;
@property (copy, nonatomic) id /* block */ eventBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
