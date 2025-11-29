@class NSString, NSNumber;

@interface AWEMusicSearchRequestModel : ACCBaseApiModel

@property (retain, nonatomic) NSString *keyword;
@property (retain, nonatomic) NSString *cursor;
@property (retain, nonatomic) NSString *count;
@property (retain, nonatomic) NSString *searchSource;
@property (retain, nonatomic) NSString *searchChannel;
@property (retain, nonatomic) NSNumber *queryCorrectType;
@property (copy, nonatomic) NSString *shootType;
@property (copy, nonatomic) NSString *shootDuration;
@property (copy, nonatomic) NSString *defaultKeyword;
@property (nonatomic) long long type;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
