@class NSString, NSDictionary;

@interface WCFinderNativeDramaDetailEpisodeConfiguration : NSObject <UIContentConfiguration, WCFinderCollectionViewReportableItem>

@property (nonatomic) unsigned long long nativeDramaID;
@property (nonatomic) unsigned long long selectedEpisodeID;
@property (nonatomic) unsigned long long identifier;
@property (nonatomic) long long episodeIndex;
@property (nonatomic) unsigned long long status;
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

@end
