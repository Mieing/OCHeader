@class NSString;

@interface HTSLiveOriginRoomInfo : IESLivePBBaseMessage

@property (nonatomic) long long roomId;
@property (nonatomic) BOOL enableLink;
@property (copy, nonatomic) NSString *roomURL;
@property (nonatomic) BOOL isAnchor;
@property (copy, nonatomic) NSString *linkText;

+ (id)descriptor;

@end
