@class ACCLokiURS, NSString, NSDictionary;

@interface ACCFilterResourceModel : NSObject <AEKFilterResource>

@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long resourceType;
@property (retain, nonatomic) ACCLokiURS *urs;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long labelID;
@property (copy, nonatomic) NSString *filePath;
@property (nonatomic) long long detailType;
@property (copy, nonatomic) NSDictionary *features;
@property (copy, nonatomic) NSDictionary *noEffectFeatures;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
