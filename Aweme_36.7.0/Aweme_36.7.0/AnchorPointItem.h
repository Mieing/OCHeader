@class NSString, HTSLiveImage, NSMutableDictionary;

@interface AnchorPointItem : IESLivePBBaseMessage

@property (nonatomic) int type;
@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *buttonSchemaURL;
@property (retain, nonatomic) NSMutableDictionary *extra;
@property (readonly, nonatomic) unsigned long long extra_Count;
@property (nonatomic) int showTimeInterval;
@property (nonatomic) int disappearTimeInterval;

+ (id)descriptor;

@end
