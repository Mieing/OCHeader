@class NSNumber, NSString, AWEIMEmoticonModel;

@interface AWEIMSimilarEmoticonDisplayAddCustomModel : NSObject

@property (retain, nonatomic) NSNumber *identifier;
@property (retain, nonatomic) NSNumber *heycanIdentifier;
@property (copy, nonatomic) NSString *animationURI;
@property (copy, nonatomic) NSString *staticURI;
@property (copy, nonatomic) NSString *animationURL;
@property (copy, nonatomic) NSString *staticURL;
@property (retain, nonatomic) NSNumber *packageId;
@property (nonatomic) int stickerType;
@property (retain, nonatomic) AWEIMEmoticonModel *imEmoticonModel;
@property (nonatomic) BOOL fromSimilar;

- (void).cxx_destruct;

@end
