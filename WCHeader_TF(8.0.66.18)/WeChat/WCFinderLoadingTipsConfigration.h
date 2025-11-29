@class NSString;

@interface WCFinderLoadingTipsConfigration : NSObject <UIContentConfiguration, WCFinderCollectionViewAbsoluteVerticalItem>

@property (nonatomic) unsigned long long state;
@property (copy, nonatomic) id /* block */ retryActionBlock;
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
