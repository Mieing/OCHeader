@class AWESSCollegeSummaryEntranceDataModel, NSString;

@interface AWESSCollegeSummaryEntranceModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL needsDisplaySummaryEntrance;
@property (nonatomic) BOOL isExpanded;
@property (nonatomic) long long collegeIntentQueryTotalCount;
@property (retain, nonatomic) AWESSCollegeSummaryEntranceDataModel *dataModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dataModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
