@class NSArray, NSString, WCFinderNativeDramaDetailEpisodeSectionModel;

@interface WCFinderNativeDramaDetailEpisodeSection : NSObject <WCFinderCollectionViewCompositionalSection>

@property (retain, nonatomic) WCFinderNativeDramaDetailEpisodeSectionModel *model;
@property (retain, nonatomic) NSArray *items;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
