@class NSString;

@interface AWECodeGenCoverTopLeftCornerModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *source;
@property (nonatomic) int modelID;
@property (copy, nonatomic) NSString *icon;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *scheme;
@property (nonatomic) BOOL residentType;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *uniqueID;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
