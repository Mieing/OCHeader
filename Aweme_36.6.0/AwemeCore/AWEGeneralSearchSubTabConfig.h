@class NSString, NSNumber;

@interface AWEGeneralSearchSubTabConfig : AWEBaseApiModel

@property (copy, nonatomic) NSString *tabName;
@property (copy, nonatomic) NSString *subChannel;
@property (retain, nonatomic) NSNumber *isAutoFill;
@property (nonatomic) BOOL selected;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
