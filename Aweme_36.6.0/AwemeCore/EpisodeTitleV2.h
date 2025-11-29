@class NSString;

@interface EpisodeTitleV2 : GPBMessage

@property (copy, nonatomic) NSString *seqOnly;
@property (nonatomic) BOOL hasSeqOnly;
@property (copy, nonatomic) NSString *seqAndType;
@property (nonatomic) BOOL hasSeqAndType;
@property (copy, nonatomic) NSString *fullTitle;
@property (nonatomic) BOOL hasFullTitle;
@property (copy, nonatomic) NSString *coverTitle;
@property (nonatomic) BOOL hasCoverTitle;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL hasTitle;
@property (copy, nonatomic) NSString *derivedType;
@property (nonatomic) BOOL hasDerivedType;
@property (copy, nonatomic) NSString *suffix;
@property (nonatomic) BOOL hasSuffix;
@property (copy, nonatomic) NSString *rawTitle;
@property (nonatomic) BOOL hasRawTitle;
@property (copy, nonatomic) NSString *coverTitleLeft;
@property (nonatomic) BOOL hasCoverTitleLeft;
@property (copy, nonatomic) NSString *coverTitleRight;
@property (nonatomic) BOOL hasCoverTitleRight;
@property (copy, nonatomic) NSString *horizonTitle;
@property (nonatomic) BOOL hasHorizonTitle;

+ (id)descriptor;

@end
