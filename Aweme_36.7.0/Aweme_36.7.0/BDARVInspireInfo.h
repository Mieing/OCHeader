@class NSString;

@interface BDARVInspireInfo : NSObject <BDARVJSONModel>

@property (nonatomic) long long effectiveInspireTime;
@property (nonatomic) long long inspireAdType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDictionary:(id)a0 error:(id *)a1;

@end
