@class NSString, NSArray, NSNumber;

@interface AWEHangoutSearchCardModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *cardID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *items;
@property (nonatomic) BOOL isNewVersion;
@property (retain, nonatomic) NSNumber *index;
@property (retain, nonatomic) NSNumber *startTime;
@property (retain, nonatomic) NSNumber *endTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)itemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
