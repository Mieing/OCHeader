@class NSNumber, NSString, NSArray;

@interface AWEBanneraAdDataModel : MTLModel <AWEBanneraAdDataModelProtocol, MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *creativeID;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *logExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSNumber *creativeID;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) BOOL isAd;
@property (copy, nonatomic) NSString *logExtra;
@property (retain, nonatomic) NSArray *trackURLList;
@property (retain, nonatomic) NSArray *clickTrackURLList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sponsorDataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
