@class _TtC21AWEECommerceSwiftImpl28AWEECMarkAnchorCommentsModel, NSArray, _TtC21AWEECommerceSwiftImpl41AWEECMarkAnchorCommentTabHeaderLabelModel, NSString, NSNumber;

@interface AWEECommerceSwiftImpl.AWEECMarkAnchorCommentPageModel : AWEBaseApiModel {
    void /* function */ aggregatedTerms;
    void /* function */ tabs;
    void /* function */ passThrough;
}

@property (nonatomic, retain) NSNumber *spuID;
@property (nonatomic, retain) _TtC21AWEECommerceSwiftImpl28AWEECMarkAnchorCommentsModel *commentList;
@property (nonatomic, copy) NSArray *aggregatedTerms;
@property (nonatomic, copy) NSArray *tabs;
@property (nonatomic, retain) NSNumber *participantCount;
@property (nonatomic, retain) _TtC21AWEECommerceSwiftImpl41AWEECMarkAnchorCommentTabHeaderLabelModel *headerLabel;
@property (nonatomic, copy) NSString *passThrough;

+ (id)aggregatedTermsJSONTransformer;
+ (id)tabsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
