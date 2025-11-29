@class NSString;

@interface BrandAffMsgExtraData : NSObject

@property (nonatomic) unsigned int msgType;
@property (retain, nonatomic) NSString *recInfo;
@property (nonatomic) unsigned int recNativeCardStyle;
@property (retain, nonatomic) NSString *extraData;
@property (retain, nonatomic) NSString *reportInfo;
@property (retain, nonatomic) NSString *recAccountUsername;
@property (nonatomic) unsigned int recStyle;
@property (retain, nonatomic) NSString *recContentUrl;
@property (retain, nonatomic) NSString *reddotReportInfo;
@property (nonatomic) BOOL useFusionSummary;
@property (nonatomic) struct RecFusionSummary { void /* function */ **_vptr$MessageLite; int cached_size_; int has_bits_[3]; void *dynamic_storage_; struct RepeatedPtrField<biz::RecFusionSummaryItem> { void **elements_; int current_size_; int allocated_size_; int total_size_; } recfusionsummaryitem_; } recFusionSummary;

- (void).cxx_destruct;
- (id).cxx_construct;

@end
