@class AWEEComWidgetGuideViewModel, NSString;

@interface AWEEComWidgetGuideResponseModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long code;
@property (retain, nonatomic) AWEEComWidgetGuideViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
