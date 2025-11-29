@class NSString;

@interface ContentTypeTagInfoV2 : GPBMessage

@property (nonatomic) long long tagId;
@property (nonatomic) BOOL hasTagId;
@property (copy, nonatomic) NSString *tagName;
@property (nonatomic) BOOL hasTagName;

+ (id)descriptor;

- (id)tagName;
- (long long)tagId;

@end
