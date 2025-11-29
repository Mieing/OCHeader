@class NSNumber, NSString, NSDictionary;

@interface WCFinderHalfProfileInteractionInfoDetailConfiguration : NSObject <UIContentConfiguration, WCFinderCollectionViewReportableItem>

@property (nonatomic) double containerWidth;
@property (retain, nonatomic) NSNumber *height;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *describeContent;
@property (copy, nonatomic) id /* block */ tapAction;
@property (copy, nonatomic) NSString *viewID;
@property (nonatomic) unsigned long long reportPolicy;
@property (copy, nonatomic) NSDictionary *params;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)itemHeightWithLayoutEnvironment:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)makeContentView;
- (id)updatedConfigurationForState:(id)a0;
- (void).cxx_destruct;

@end
