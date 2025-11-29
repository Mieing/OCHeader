@class IESECQualityInfoV2;

@interface IESECShopSearchResultHybridVC : UIViewController <IESECShopSearchResultVCProtocol> {
    void /* unknown type, empty encoding */ searchContext;
    void /* unknown type, empty encoding */ hybridPageVC;
    void /* unknown type, empty encoding */ $__lazy_storage_$_legacyContext;
    void /* unknown type, empty encoding */ $__lazy_storage_$_legacyHybridContext;
    void /* unknown type, empty encoding */ searchSource;
    void /* unknown type, empty encoding */ suggestGroupID;
}

@property (nonatomic, readonly) IESECQualityInfoV2 *qualityInfo;

- (void)searchForKey:(id)a0;
- (void)updateSearchSource:(unsigned long long)a0;
- (void)updateSuggestGroupID:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (id)initWith:(id)a0;

@end
