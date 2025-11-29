@class NSString, NSDictionary, NSURL, WCFinderMention, NSNumber;

@interface WCFinderInteractionCommentRecordConfiguration : NSObject <UIContentConfiguration, WCFinderCollectionViewAbsoluteVerticalItem, WCFinderCollectionViewReportableItem>

@property (nonatomic) double containerWidth;
@property (retain, nonatomic) NSNumber *height;
@property (nonatomic) unsigned long long identifier;
@property (copy, nonatomic) NSString *date;
@property (copy, nonatomic) NSString *comment;
@property (copy, nonatomic) NSString *quoteContent;
@property (retain, nonatomic) NSURL *thumbURL;
@property (copy, nonatomic) NSString *viewID;
@property (nonatomic) unsigned long long reportPolicy;
@property (copy, nonatomic) NSDictionary *params;
@property (retain, nonatomic) WCFinderMention *mention;
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
