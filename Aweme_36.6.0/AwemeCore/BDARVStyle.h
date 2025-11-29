@class NSString;

@interface BDARVStyle : NSObject <BDARVJSONModel>

@property (copy, nonatomic) NSString *templateUrl;
@property (copy, nonatomic) NSString *styleId;
@property (copy, nonatomic) NSString *templateData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
