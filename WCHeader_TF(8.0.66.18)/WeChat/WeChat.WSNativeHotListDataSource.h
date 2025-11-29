@interface WeChat.WSNativeHotListDataSource : NSObject <MMTListAdapterDataSource> {
    void /* unknown type, empty encoding */ verticalEntryData;
    void /* unknown type, empty encoding */ historyData;
    void /* unknown type, empty encoding */ subscriptionEntryData;
    void /* unknown type, empty encoding */ hotSearchData;
    void /* unknown type, empty encoding */ session;
    void /* unknown type, empty encoding */ isAdHidden;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ settingData;

- (id)initWithSession:(id)a0;
- (id)objectsForListAdapter:(id)a0;
- (id)listAdapter:(id)a0 sectionControllerForObject:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
