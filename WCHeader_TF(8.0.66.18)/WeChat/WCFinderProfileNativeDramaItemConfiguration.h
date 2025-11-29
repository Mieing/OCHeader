@class NSURL, NSString, NSDictionary;

@interface WCFinderProfileNativeDramaItemConfiguration : NSObject <UIContentConfiguration, WCFinderCollectionViewReportableItem>

@property (nonatomic) unsigned long long identifier;
@property (retain, nonatomic) NSURL *coverUrl;
@property (nonatomic) BOOL isSticky;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *episodeCount;
@property (nonatomic) BOOL disabledCornerRadius;
@property (copy, nonatomic) NSString *authorFinderUsername;
@property (copy, nonatomic) NSString *sourceFeedID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *viewID;
@property (readonly, nonatomic) unsigned long long reportPolicy;
@property (readonly, copy, nonatomic) NSDictionary *params;

+ (id)configurationForInfo:(id)a0;

- (id)makeContentView;
- (id)updatedConfigurationForState:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
