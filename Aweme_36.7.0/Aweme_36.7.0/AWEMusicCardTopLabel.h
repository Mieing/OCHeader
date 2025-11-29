@class NSString, AWEMusicCardUrlModel, NSArray;

@interface AWEMusicCardTopLabel : AWEBaseApiModel

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *schema;
@property (retain, nonatomic) AWEMusicCardUrlModel *icon;
@property (retain, nonatomic) NSArray *text;
@property (nonatomic) long long trunc_pos;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
