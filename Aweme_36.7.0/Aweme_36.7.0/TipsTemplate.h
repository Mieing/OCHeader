@class NSString, TipsExtra;

@interface TipsTemplate : GPBMessage

@property (copy, nonatomic) NSString *key;
@property (nonatomic) BOOL hasKey;
@property (nonatomic) int action;
@property (nonatomic) BOOL hasAction;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL hasName;
@property (copy, nonatomic) NSString *link;
@property (nonatomic) BOOL hasLink;
@property (retain, nonatomic) TipsExtra *extra;
@property (nonatomic) BOOL hasExtra;

+ (id)descriptor;

@end
