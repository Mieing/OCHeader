@class NSString;

@interface IESIMGroupImpl.GroupTagCustomTagSelectorDataProvider : NSObject <IESIMContactPickerContentDataProvider> {
    void /* unknown type, empty encoding */ sectionBuilderProperty;
    void /* unknown type, empty encoding */ con;
    void /* unknown type, empty encoding */ parentComponentContext;
    void /* unknown type, empty encoding */ selectService;
}

@property (nonatomic, readonly) NSString *providerIdentifier;
@property (nonatomic, weak) void /* function */ providerDelegate;

- (id)getCellViewModels;
- (void)didLoadProvider:(id)a0 inComponent:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)sectionBuilder;

@end
