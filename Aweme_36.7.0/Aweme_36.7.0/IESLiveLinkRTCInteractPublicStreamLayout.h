@class NSString, NSArray;

@interface IESLiveLinkRTCInteractPublicStreamLayout : NSObject

@property (nonatomic) long long layoutMode;
@property (nonatomic) long long interpolationMode;
@property (copy, nonatomic) NSString *backgroundColor;
@property (copy, nonatomic) NSString *backgroundImage;
@property (copy, nonatomic) NSArray *regions;

- (void).cxx_destruct;

@end
