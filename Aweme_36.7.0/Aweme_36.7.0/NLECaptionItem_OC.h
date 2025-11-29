@class NSString;

@interface NLECaptionItem_OC : NLENode_OC

@property (nonatomic) struct shared_ptr<cut::model::NLECaptionItem> { struct NLECaptionItem *x0; struct __shared_weak_count *x1; } cppValue;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (nonatomic) BOOL isKey;

- (id)initWithCPPNode:(struct shared_ptr<cut::model::NLECaptionItem> { struct NLECaptionItem *x0; struct __shared_weak_count *x1; })a0;
- (id)aek_wordDurationInfo;
- (id)init;

@end
