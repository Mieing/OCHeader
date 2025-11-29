@class ARTBusinessInput, NSString, NSDictionary, ARTBusinessCfgCond, ARTBusinessCfg, ARTBusinessOutput, ARTModel;

@interface ARTBusiness : NSObject

@property (nonatomic) BOOL memWarning;
@property (retain, nonatomic) NSDictionary *settings;
@property (retain, nonatomic) ARTBusinessCfgCond *cond;
@property (retain, nonatomic) ARTBusinessOutput *output;
@property (readonly, copy, nonatomic) NSString *unqiueId;
@property (copy, nonatomic) NSString *businessID;
@property (readonly, nonatomic) ARTBusinessCfg *cfg;
@property (retain, nonatomic) ARTModel *actualModelObject;
@property (readonly, nonatomic) ARTBusinessInput *input;

- (id)initWithBusinessId:(id)a0 input:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
