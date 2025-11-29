@class NSString;

@interface AWECodeGenEpisodeTitleModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *seqOnly;
@property (copy, nonatomic) NSString *seqAndType;
@property (copy, nonatomic) NSString *fullTitle;
@property (copy, nonatomic) NSString *coverTitle;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *derivedType;
@property (copy, nonatomic) NSString *suffix;
@property (copy, nonatomic) NSString *rawTitle;
@property (copy, nonatomic) NSString *coverTitleLeft;
@property (copy, nonatomic) NSString *coverTitleRight;
@property (copy, nonatomic) NSString *horizonTitle;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
