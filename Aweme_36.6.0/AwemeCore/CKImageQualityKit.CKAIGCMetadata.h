@class NSString;

@interface CKImageQualityKit.CKAIGCMetadata : NSObject {
    void /* function */ label;
    void /* function */ contentProducer;
    void /* function */ produceId;
    void /* function */ reservedCode1;
    void /* function */ contentPropagator;
    void /* function */ propagateId;
    void /* function */ reservedCode2;
}

@property (class, nonatomic, readonly) NSString *key;

@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) NSString *contentProducer;
@property (nonatomic, readonly) NSString *produceId;
@property (nonatomic, readonly) NSString *reservedCode1;
@property (nonatomic, readonly) NSString *contentPropagator;
@property (nonatomic, readonly) NSString *propagateId;
@property (nonatomic, readonly) NSString *reservedCode2;
@property (nonatomic, readonly) NSString *description;

+ (id)buildWithJson:(id)a0;

- (id)toJSONDict;
- (id)initWithLabel:(id)a0 contentProducer:(id)a1 produceId:(id)a2 reservedCode1:(id)a3 contentPropagator:(id)a4 propagateId:(id)a5 reservedCode2:(id)a6;
- (id)init:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
