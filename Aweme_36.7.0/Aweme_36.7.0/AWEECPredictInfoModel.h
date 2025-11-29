@class NSString, NSNumber, NSArray;

@interface AWEECPredictInfoModel : MTLModel <MTLJSONSerializing, NSCopying>

@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSString *productId;
@property (retain, nonatomic) NSString *groupId;
@property (retain, nonatomic) NSString *authorId;
@property (nonatomic) long long timeStamp;
@property (retain, nonatomic) NSNumber *clickProductCtr;
@property (retain, nonatomic) NSArray *triggerList;
@property (retain, nonatomic) NSString *mediaType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
