@class NSString, NSDictionary;
@protocol IESIMContactPickerContentSectionBuilder, IESIMContactPickerContentDataProviderDelegate;

@interface IESIMContactPickerDynamicDataProvider : NSObject <IESIMContactPickerContentDataProvider>

@property (copy, nonatomic) NSString *providerIdentifier;
@property (retain, nonatomic) id<IESIMContactPickerContentSectionBuilder> sectionBuilder;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSDictionary *extra;
@property (weak, nonatomic) id<IESIMContactPickerContentDataProviderDelegate> providerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getShareModels;
- (id)initWithScene:(id)a0 extra:(id)a1;
- (void).cxx_destruct;

@end
