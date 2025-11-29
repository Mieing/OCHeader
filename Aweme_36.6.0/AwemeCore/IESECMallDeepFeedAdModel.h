@class NSNumber, NSString;

@interface IESECMallDeepFeedAdModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *creativeID;
@property (copy, nonatomic) NSString *logExtra;
@property (copy, nonatomic) NSString *ID;
@property (copy, nonatomic) NSString *adPackCell;
@property (nonatomic) BOOL showAdTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)fetchCreativeID;
- (id)fetchLogExtra;
- (void).cxx_destruct;

@end
