@class NativeDramaEpisodeRanges, NSString, NSDictionary;

@interface WCFinderNativeDramaDetailRangeConfiguration : NSObject <UIContentConfiguration, WCFinderCollectionViewReportableItem>

@property (nonatomic) unsigned long long selectedEpisodeID;
@property (nonatomic) unsigned long long nativeDramaID;
@property (retain, nonatomic) NativeDramaEpisodeRanges *range;
@property (copy, nonatomic) NSString *rangeText;
@property (nonatomic) BOOL selected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *viewID;
@property (readonly, nonatomic) unsigned long long reportPolicy;
@property (readonly, copy, nonatomic) NSDictionary *params;

- (id)makeContentView;
- (id)updatedConfigurationForState:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
