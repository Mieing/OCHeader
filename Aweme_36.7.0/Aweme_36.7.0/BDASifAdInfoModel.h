@class NSString, NSNumber, NSArray;

@interface BDASifAdInfoModel : NSObject <BDSchemaModelProtocol>

@property (copy, nonatomic) NSString *adID;
@property (retain, nonatomic) NSNumber *creativeID;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *logExtra;
@property (copy, nonatomic) NSArray *trackUrlList;
@property (copy, nonatomic) NSString *SKANParameters;
@property (copy, nonatomic) NSString *webURL;
@property (copy, nonatomic) NSString *webTitle;
@property (copy, nonatomic) NSString *refer;
@property (copy, nonatomic) NSString *tag;
@property (retain, nonatomic) NSNumber *bundleBizID;
@property (copy, nonatomic) NSString *downloadURL;
@property (copy, nonatomic) NSString *complianceData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;
+ (id)modelWithSchemaData:(id)a0;

@end
