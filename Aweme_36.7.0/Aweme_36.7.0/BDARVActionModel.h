@class NSString;

@interface BDARVActionModel : NSObject <BDARVJSONModel>

@property (copy, nonatomic) NSString *ad_id;
@property (copy, nonatomic) NSString *log_extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
