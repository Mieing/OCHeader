@class NSString, NSArray;

@interface AWELunaMusicianInfoModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *artistID;
@property (copy, nonatomic) NSString *artistName;
@property (copy, nonatomic) NSString *artistDescription;
@property (nonatomic) unsigned long long songAmount;
@property (retain, nonatomic) NSArray *songs;
@property (copy, nonatomic) NSString *guideContent;

+ (id)songsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
