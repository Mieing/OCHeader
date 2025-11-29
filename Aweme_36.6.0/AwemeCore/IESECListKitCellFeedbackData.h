@class NSArray, NSString;

@interface IESECListKitCellFeedbackData : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *reasonList;
@property (nonatomic) long long firstPageLimit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reasonListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
