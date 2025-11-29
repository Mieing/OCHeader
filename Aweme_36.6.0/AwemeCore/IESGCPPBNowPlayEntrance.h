@class NSString;

@interface IESGCPPBNowPlayEntrance : GPBMessage

@property (copy, nonatomic) NSString *icon;
@property (copy, nonatomic) NSString *subIcon;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *buttonSchema;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) BOOL placeholder;

+ (id)descriptor;

@end
