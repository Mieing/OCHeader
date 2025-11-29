@class NSString, HTSLiveImage;

@interface HTSLiveInteractActingBGInfo : IESLivePBBaseMessage

@property (nonatomic) long long bgId;
@property (copy, nonatomic) NSString *bgUri;
@property (retain, nonatomic) HTSLiveImage *bgImage;
@property (nonatomic) BOOL hasBgImage;
@property (copy, nonatomic) NSString *extra;

+ (id)descriptor;

@end
