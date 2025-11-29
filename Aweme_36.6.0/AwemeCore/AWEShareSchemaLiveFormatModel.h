@class NSString, NSDictionary, AWEURLModel;

@interface AWEShareSchemaLiveFormatModel : AWEBaseApiModel

@property (retain, nonatomic) AWEURLModel *roomCover;
@property (copy, nonatomic) NSString *roomDesc;
@property (retain, nonatomic) NSDictionary *extraParams;
@property (nonatomic) BOOL isLiving;

+ (id)extraParamsJSONTransformer;
+ (id)roomCoverJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
