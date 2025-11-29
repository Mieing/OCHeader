@class NSString;

@interface AWECodeGenOperationCardModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *lightPictureUrl;
@property (copy, nonatomic) NSString *darkPictureUrl;
@property (copy, nonatomic) NSString *schemaUrl;
@property (nonatomic) double cardRatio;
@property (copy, nonatomic) NSString *modelID;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long index;
@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (copy, nonatomic) NSString *tag;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
