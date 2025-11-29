@class NSString, NSMutableDictionary;

@interface AmoebaRelatedData : NSObject {
    NSString *m_targetId;
    NSMutableDictionary *m_params;
}

- (id)init;
- (id)getTargetId;
- (void)setTargetId:(id)a0;
- (id)getParams;
- (void)setParams:(id)a0;
- (void)putParam:(id)a0 withValue:(id)a1;
- (void)putParams:(id)a0;
- (void)reset;
- (void).cxx_destruct;

@end
