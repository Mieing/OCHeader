@class NSString;

@interface AWEIMGrowthImpl.IncentiveChatRecentGroupDataProvider : NSObject <IESIMContactPickerContentDataProvider> {
    void /* unknown type, empty encoding */ builder;
    void /* function */ providerIdentifier;
    void /* unknown type, empty encoding */ limitCount;
    void /* unknown type, empty encoding */ searchCount;
    void /* unknown type, empty encoding */ filterBlock;
    void /* unknown type, empty encoding */ itemList;
}

@property (nonatomic, copy) NSString *providerIdentifier;
@property (nonatomic, weak) void /* function */ providerDelegate;

- (void)updateSectionBuilder:(id)a0;
- (id)getCellViewModels;
- (void).cxx_destruct;
- (id)init;
- (id)sectionBuilder;

@end
