@class NSString;

@interface RelatedVideoInfoV2 : GPBMessage

@property (nonatomic) long long relatedType;
@property (nonatomic) BOOL hasRelatedType;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) BOOL hasExtra;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL hasTitle;

+ (id)descriptor;

@end
