@class NSString, NSDictionary, NSError;

@interface FurionSmartEngineOutputData : NSObject <BDModelCustom>

@property (copy, nonatomic) NSString *label;
@property (readonly, nonatomic) float labelScore;
@property (nonatomic) float value;
@property (copy, nonatomic) NSDictionary *scoreMap;
@property (copy, nonatomic) NSDictionary *outParams;
@property (copy, nonatomic) NSDictionary *extOutParams;
@property (nonatomic) long long errorCode;
@property (retain, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelPropertyWhitelist;

- (void)mergeFromDictionary:(id)a0;
- (void).cxx_destruct;

@end
