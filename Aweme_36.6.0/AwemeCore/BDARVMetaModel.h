@class NSString, NSDictionary, BDARVStyle, BDARVDataModel;

@interface BDARVMetaModel : NSObject <BDARVJSONModel>

@property (retain, nonatomic) BDARVStyle *style;
@property (copy, nonatomic) NSDictionary *data;
@property (retain, nonatomic) BDARVDataModel *dataModel;
@property (copy, nonatomic) NSDictionary *components;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)templateURL;

@end
