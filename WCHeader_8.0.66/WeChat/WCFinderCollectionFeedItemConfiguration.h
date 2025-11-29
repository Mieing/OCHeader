@class NSString, NSDictionary, WCFinderFeedContentVM, WCFinderCollectionFeedCellConfig;

@interface WCFinderCollectionFeedItemConfiguration : NSObject <UIContentConfiguration, WCFinderCollectionViewAbsoluteVerticalItem, WCFinderCollectionViewReportableItem>

@property (retain, nonatomic) WCFinderCollectionFeedCellConfig *config;
@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (readonly, copy, nonatomic) NSString *viewID;
@property (readonly, nonatomic) unsigned long long reportPolicy;
@property (copy, nonatomic) NSDictionary *params;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)itemHeightWithLayoutEnvironment:(id)a0 context:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)makeContentView;
- (id)updatedConfigurationForState:(id)a0;
- (void).cxx_destruct;

@end
