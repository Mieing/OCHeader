@class NSString;

@interface HTSLiveContentInfo : IESLivePBBaseMessage

@property (nonatomic) long long contentId;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *tagType;
@property (nonatomic) int lastest;
@property (nonatomic) int total;
@property (copy, nonatomic) NSString *category;
@property (nonatomic) long long viewRight;
@property (copy, nonatomic) NSString *contentIdStr;
@property (nonatomic) int duration;
@property (nonatomic) long long promiseUpdateTime;

+ (id)descriptor;

@end
