@class NSDictionary, NSString;

@interface WCFinderCollectionActionConfiguration : NSObject <UIContentConfiguration, WCFinderCollectionViewAbsoluteVerticalItem>

@property (copy, nonatomic) id /* block */ didTapShareButton;
@property (copy, nonatomic) id /* block */ didTapFavoritesButton;
@property (copy, nonatomic) NSDictionary *reportParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)makeContentView;
- (id)updatedConfigurationForState:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)itemHeightWithLayoutEnvironment:(id)a0 context:(id)a1;
- (void).cxx_destruct;

@end
