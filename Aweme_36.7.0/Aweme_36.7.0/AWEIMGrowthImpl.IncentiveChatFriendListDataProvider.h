@class NSString;

@interface AWEIMGrowthImpl.IncentiveChatFriendListDataProvider : NSObject <IESIMContactPickerContentDataProvider> {
    void /* unknown type, empty encoding */ builder;
    void /* function */ providerIdentifier;
    void /* unknown type, empty encoding */ enterFrom;
}

@property (nonatomic, copy) NSString *providerIdentifier;
@property (nonatomic, weak) void /* function */ providerDelegate;

- (void)updateSectionBuilder:(id)a0;
- (id)getCellViewModels;
- (void).cxx_destruct;
- (id)init;
- (id)sectionBuilder;

@end
