@class NSString, HTSLiveImage, NSMutableDictionary;

@interface FeedLiveIdeaInfoResponse_Data : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *buttonSchemaURL;
@property (retain, nonatomic) NSMutableDictionary *extra;
@property (readonly, nonatomic) unsigned long long extra_Count;

+ (id)descriptor;

@end
