@class NSString;

@interface WCFinderMPVideoInteractionInfo : NSObject

@property (retain, nonatomic) NSString *feedKey;
@property (nonatomic) BOOL isLike;
@property (nonatomic) unsigned long long likeCount;
@property (nonatomic) BOOL isFav;
@property (nonatomic) unsigned long long favCount;

+ (id)interactionInfoWithDataItem:(id)a0;

- (void).cxx_destruct;

@end
