@class NSString, NSData, NSArray;

@interface WCFinderGetBulletCommentCGIParams : NSObject

@property (copy, nonatomic) NSString *objectId;
@property (copy, nonatomic) NSString *objectNonceId;
@property (nonatomic) unsigned long long startTimestamp;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) int selectedSource;
@property (nonatomic) int commentScene;
@property (copy, nonatomic) NSArray *needCommentIds;
@property (retain, nonatomic) NSData *bypassBuffer;

- (void).cxx_destruct;

@end
