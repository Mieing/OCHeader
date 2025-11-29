@class NSNumber, NSString;

@interface AWEECommerceSwiftImpl.AWEECMarkAnchorCommentPageRequestModel : MTLModel <MTLJSONSerializing> {
    void /* function */ validTime;
    void /* function */ passThrough;
    void /* function */ clientPassThrough;
}

@property (nonatomic, retain) NSNumber *spuID;
@property (nonatomic, retain) NSNumber *cursor;
@property (nonatomic, retain) NSNumber *count;
@property (nonatomic, retain) NSNumber *anchorType;
@property (nonatomic, retain) NSNumber *selectAggregatedID;
@property (nonatomic, copy) NSString *validTime;
@property (nonatomic, copy) NSString *passThrough;
@property (nonatomic, copy) NSString *clientPassThrough;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
