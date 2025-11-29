@class NSString;

@interface SelectUGBarInfoV2 : GPBMessage

@property (copy, nonatomic) NSString *barId;
@property (nonatomic) BOOL hasBarId;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) BOOL hasText;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) BOOL hasSchema;
@property (copy, nonatomic) NSString *clientExtra;
@property (nonatomic) BOOL hasClientExtra;
@property (copy, nonatomic) NSString *lynxExtra;
@property (nonatomic) BOOL hasLynxExtra;

+ (id)descriptor;

@end
