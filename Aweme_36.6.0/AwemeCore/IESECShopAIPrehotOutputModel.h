@class NSNumber, NSDictionary, NSString;

@interface IESECShopAIPrehotOutputModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL shouldAttribution;
@property (nonatomic) BOOL shouldPrefetch;
@property (retain, nonatomic) NSNumber *timeStamp;
@property (retain, nonatomic) NSNumber *validDuration;
@property (retain, nonatomic) NSNumber *invalidSec;
@property (retain, nonatomic) NSNumber *reinitValidDur;
@property (nonatomic) BOOL enableReinitValid;
@property (retain, nonatomic) NSDictionary *ptyAlogInfo;
@property (retain, nonatomic) NSNumber *code;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
