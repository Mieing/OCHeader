@class NSString, HTSLiveImage, HTSLiveHotText;

@interface HTSLiveBizContent : IESLivePBBaseMessage

@property (nonatomic) int contentType;
@property (nonatomic) long long number;
@property (copy, nonatomic) NSString *textContent;
@property (retain, nonatomic) HTSLiveImage *imageContent;
@property (nonatomic) BOOL hasImageContent;
@property (retain, nonatomic) HTSLiveHotText *hotTextContent;
@property (nonatomic) BOOL hasHotTextContent;
@property (nonatomic) long long timeStamp;
@property (copy, nonatomic) NSString *endText;

+ (id)descriptor;

@end
