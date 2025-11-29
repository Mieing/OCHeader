@class NSString, NSArray, NSDictionary, NSError, AWEGrouponResponseDataNodeRuntimeState, AWEGrouponResponseTemplate;

@interface AWEGrouponResponseDataNode : NSObject

@property (readonly, nonatomic) NSString *superNodeTag;
@property (readonly, nonatomic) NSArray *subNodeTagList;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) AWEGrouponResponseDataNodeRuntimeState *runtimeState;
@property (copy, nonatomic) NSString *tag;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *subType;
@property (nonatomic) unsigned long long updateType;
@property (copy, nonatomic) NSDictionary *data;
@property (copy, nonatomic) NSDictionary *config;
@property (copy, nonatomic) NSDictionary *style;
@property (retain, nonatomic) AWEGrouponResponseTemplate *templet;
@property (copy, nonatomic) NSDictionary *sourceData;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) AWEGrouponResponseDataNodeRuntimeState *runtimeState;

- (id)errorWithCode:(long long)a0 msg:(id)a1;
- (void)p_setSubNodeTagList:(id)a0;
- (id)initWithTag:(id)a0 sourceData:(id)a1;
- (void)p_setSuperNodeTag:(id)a0;
- (void)p_setData:(id)a0;
- (void)parseSourceData:(id)a0;
- (unsigned long long)typeFromSourceData:(id)a0;
- (unsigned long long)updateTypeFromSourceData:(id)a0;
- (void)setSuperNodeTag:(id)a0;
- (void)setSubNodeTagList:(id)a0;
- (void).cxx_destruct;

@end
